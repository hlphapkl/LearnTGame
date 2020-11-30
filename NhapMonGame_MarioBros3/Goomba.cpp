#include "Goomba.h"
#include "Utils.h"
#include "ColorBox.h"
CGoomba::CGoomba(CMario* m, int type, int level)
{
	this->level = level;
	this->type = type;
	player = m;
	goombaGeneral = new CGoombaGeneral();
	goombaGeneral->LoadListAni();
	SetState(GOOMBA_STATE_MOVE);
}

void CGoomba::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x;
	top = y;
	right = left + 20;
	bottom = top + 24;
	if (level == GOOMBA_LEVEL_HAVE_WING)
	{
		if (!isFlying)
		{
			top = top + 5;
		}
	}
	else
		top = top + 8;
	if (state == GOOMBA_STATE_DIE)
		top = top + 15;
	left = left + 2;
}

void CGoomba::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CEnemy::Update(dt, coObjects);


	//Follow Mario
	if (x + GOOMBA_BBOX_WIDTH < player->x)
	{
		nx = 1;
	}
	else
		nx = -1;
	vector<LPCOLLISIONEVENT> coEvents;
	vector<LPCOLLISIONEVENT> coEventsResult;

	coEvents.clear();
	if (!isKillByWeapon)
	{
		CalcPotentialCollisions(coObjects, coEvents);
	}
	if (GetTickCount() - timeStartMove >= 2000)
	{
		isAllowJump = true;
	}
	// No collision occured, proceed normally
	if (coEvents.size() == 0)
	{
		x += dx;
		y += dy;
	}
	else
	{
		float min_tx, min_ty, nx = 0, ny;
		float rdx = 0;
		float rdy = 0;

		FilterCollision(coEvents, coEventsResult, min_tx, min_ty, nx, ny, rdx, rdy);

		x += min_tx * dx + nx * 0.4f;
		y += min_ty * dy + ny * 0.1f;

		if (ny < 0)
		{
			vy = 0;
			if (isAllowJump)
				numJump++;
			if (numJump == 4)
			{
				isFlying = false;
				timeStartMove = GetTickCount();
				isAllowJump = false;
				numJump = 0;
			}
		}
		else
			if (nx != 0)
			{
				backup_vx = vx;
				vx = -vx;
			}
		for (UINT i = 0; i < coEventsResult.size(); i++)
		{
			LPCOLLISIONEVENT e = coEventsResult[i];
			if (dynamic_cast<CColorBox*>(e->obj))
			{
				if (e->nx != 0)
				{
					vx = backup_vx;
					x += dx;
				}
			}
		}
		if (isMoving)
		{
			SetState(GOOMBA_STATE_MOVE);
		}
		for (UINT i = 0; i < coEvents.size(); i++) delete coEvents[i];
	}
}




void CGoomba::Render()
{
	int aniIndex = -1;
	if (isMoving)
	{
		if (level == GOOMBA_LEVEL_HAVE_WING)
		{
			if (isFlying)
				aniIndex = GOOMBA_ANI_FLYING;
			else
				aniIndex = GOOMBA_ANI_HAVE_WING_MOVING;
		}
		else
			aniIndex = GOOMBA_ANI_MOVING;
	}
	else
	{
		if (isKillByWeapon)
			aniIndex = GOOMBA_ANI_DIE_BY_WEAPON;
		else
			aniIndex = GOOMBA_ANI_DIE;
	}
	ani = goombaGeneral->GetAni_Goomba(type, aniIndex);
	//DebugOut(L"Ani Gomba %d \n", ani);
	animation_set->at(ani)->Render(x, y);
	RenderBoundingBox();
}

void CGoomba::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case GOOMBA_STATE_MOVE:
		isMoving = true;
	
		if (level == GOOMBA_LEVEL_HAVE_WING)
		{
			if (isAllowJump)
			{
				if (numJump <= 2) //Nhayr laanf 2
				{
					vy = -0.06;
					isFlying = true;
				}
				else
				{
					vy = -0.15;
					isFlying = true;
				}
			}
			else
				vy = 0;
				
			if (nx == 1)
			{
				vx = GOOMBA_SPEED_MOVE;
			}
			else
			{
				vx = -GOOMBA_SPEED_MOVE;
			}
		}
		else
			if (level == GOOMBA_LEVEL_DEFAULT)
			{
				if (nx == 1)
				{
					vx = GOOMBA_SPEED_MOVE;
				}
				else
				{
					vx = -GOOMBA_SPEED_MOVE;
				}
			}
		break;
	case GOOMBA_STATE_DIE:
		isMoving = false;
		if (isKillByWeapon)
		{
			vy = -GOOMBA_SPEED_BOUNCE;
			if (player->nx == 1)
			{
				vx = GOOMBA_SPEED_WHEN_DIE;
			}
			else if (player->nx == -1)
			{
				vx = -GOOMBA_SPEED_WHEN_DIE;
			}
		}
		else
		{
			vy = 0;
			vx = 0;
		}
		break;
	}
}
