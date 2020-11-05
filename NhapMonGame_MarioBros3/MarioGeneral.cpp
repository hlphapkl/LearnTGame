﻿#include "MarioGeneral.h"

CMarioGeneral::CMarioGeneral()
{
	
}

void CMarioGeneral::LoadListAni()
{
	if (listAni_mario_small.empty())
	{
		// Đứng yên
		listAni_mario_small.push_back(MARIO_ANI_SMALL_IDLE_RIGHT);		//0
		listAni_mario_small.push_back(MARIO_ANI_SMALL_IDLE_LEFT);		//1

		//Đi
		listAni_mario_small.push_back(MARIO_ANI_SMALL_WALKING_RIGHT);	//2	
		listAni_mario_small.push_back(MARIO_ANI_SMALL_WALKING_LEFT);	//3

		//Dừng
		listAni_mario_small.push_back(MARIO_ANI_SMALL_STOP_RIGHT);	//4
		listAni_mario_small.push_back(MARIO_ANI_SMALL_STOP_LEFT);	//5

		//Bay
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLYING_RIGHT);	//6
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLYING_LEFT);	//7

		//Chạy
		listAni_mario_small.push_back(MARIO_ANI_SMALL_RUNNING_RIGHT);	//8
		listAni_mario_small.push_back(MARIO_ANI_SMALL_RUNNING_LEFT);	//9

		//Bay khi đạt tốc độ cao
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLY_WHEN_RUNNING_RIGHT);	//10
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLY_WHEN_RUNNING_LEFT);	//11

		//Mario đá rùa -> CHƯA CÓ ANIUMATION
		listAni_mario_small.push_back(MARIO_ANI_SMALL_KICK_RIGHT);	//12
		listAni_mario_small.push_back(MARIO_ANI_SMALL_KICK_LEFT);	//13


		//Ngồi mario nhỏ không ngồi
		listAni_mario_small.push_back(MARIO_ANI_SMALL_IDLE_RIGHT);	//14
		listAni_mario_small.push_back(MARIO_ANI_SMALL_IDLE_LEFT);	//15

		//Rơi (mario nhỏ không rơi)
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLYING_RIGHT);	//16
		listAni_mario_small.push_back(MARIO_ANI_SMALL_FLYING_LEFT);	//17

		//Giữ rùa IDLE
		listAni_mario_small.push_back(MARIO_ANI_SMALL_HOLD_IDLE_RIGHT);	//18
		listAni_mario_small.push_back(MARIO_ANI_SMALL_HOLD_IDLE_LEFT); //19

		//Giữ rùa Walking
		listAni_mario_small.push_back(MARIO_ANI_SMALL_HOLD_WALKING_RIGHT); //20
		listAni_mario_small.push_back(MARIO_ANI_SMALL_HOLD_WALKING_LEFT); //21





	}
	
	if (listAni_mario_big.empty())
	{
		// Đứng yên
		listAni_mario_big.push_back(MARIO_ANI_BIG_IDLE_RIGHT);		//0
		listAni_mario_big.push_back(MARIO_ANI_BIG_IDLE_LEFT);		//1

		//Đi
		listAni_mario_big.push_back(MARIO_ANI_BIG_WALKING_RIGHT);	//2	
		listAni_mario_big.push_back(MARIO_ANI_BIG_WALKING_LEFT);	//3

		//Dừng
		listAni_mario_big.push_back(MARIO_ANI_BIG_STOP_RIGHT);	//4
		listAni_mario_big.push_back(MARIO_ANI_BIG_STOP_LEFT);	//5

		//Bay
		listAni_mario_big.push_back(MARIO_ANI_BIG_FLYING_RIGHT);	//6
		listAni_mario_big.push_back(MARIO_ANI_BIG_FLYING_LEFT);	//7

		//Chạy
		listAni_mario_big.push_back(MARIO_ANI_BIG_RUNNING_RIGHT);	//8
		listAni_mario_big.push_back(MARIO_ANI_BIG_RUNNING_LEFT);	//9

		//Bay khi đạt tốc độ cao
		listAni_mario_big.push_back(MARIO_ANI_BIG_FLY_WHEN_RUNNING_RIGHT);	//10
		listAni_mario_big.push_back(MARIO_ANI_BIG_FLY_WHEN_RUNNING_LEFT);	//11

		//Mario đá rùa -> CHƯA CÓ ANIUMATION
		listAni_mario_big.push_back(MARIO_ANI_BIG_KICK_RIGHT);	//12
		listAni_mario_big.push_back(MARIO_ANI_BIG_KICK_LEFT);	//13

		//Ngồi
		listAni_mario_big.push_back(MARIO_ANI_BIG_SITTING_RIGHT);	//14
		listAni_mario_big.push_back(MARIO_ANI_BIG_SITTING_LEFT);	//15

		//Rơi
		listAni_mario_big.push_back(MARIO_ANI_BIG_FALLING_RIGHT);	//16
		listAni_mario_big.push_back(MARIO_ANI_BIG_FALLING_LEFT);	//17

		//Giữ rùa IDLE
		listAni_mario_big.push_back(MARIO_ANI_BIG_HOLD_IDLE_RIGHT);	//18
		listAni_mario_big.push_back(MARIO_ANI_BIG_HOLD_IDLE_LEFT); //19

		//Giữ rùa Walking
		listAni_mario_big.push_back(MARIO_ANI_BIG_HOLD_WALKING_RIGHT); //20
		listAni_mario_big.push_back(MARIO_ANI_BIG_HOLD_WALKING_LEFT); //21

	}
	
	if (listAni_mario_tail.empty())
	{
		// Đứng yên
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_IDLE_RIGHT);		//0
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_IDLE_LEFT);		//1

		//Đi
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_WALKING_RIGHT);	//2	
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_WALKING_LEFT);	//3

		//Dừng
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_STOP_RIGHT);	//4
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_STOP_LEFT);	//5

		//Bay
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FLYING_RIGHT);	//6
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FLYING_LEFT);	//7

		//Chạy
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_RUNNING_RIGHT);	//8
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_RUNNING_LEFT);	//9

		//Bay khi đạt tốc độ cao
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FLY_WHEN_RUNNING_RIGHT);	//10
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FLY_WHEN_RUNNING_LEFT);	//11

		//Mario đá rùa
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_KICK_RIGHT);	//12
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_KICK_LEFT);	//13

		//Ngồi
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_SITTING_RIGHT);	//14
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_SITTING_LEFT);	//15

		//Rơi
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FALLING_RIGHT);	//16
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_FALLING_LEFT);	//17

		//Giữ rùa IDLE
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_HOLD_IDLE_RIGHT);	//18
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_HOLD_IDLE_LEFT); //19

		//Giữ rùa Walking
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_HOLD_WALKING_RIGHT); //20
		listAni_mario_tail.push_back(MARIO_ANI_BIG_TAIL_HOLD_WALKING_LEFT); //21



	


	}

	if (listAni_mario_fire.empty())
	{
		// Đứng yên
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_IDLE_RIGHT);		//0
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_IDLE_LEFT);		//1

		//Đi
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_WALKING_RIGHT);	//2	
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_WALKING_LEFT);	//3

		//Dừng
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_STOP_RIGHT);	//4
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_STOP_LEFT);	//5

		//Bay
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FLYING_RIGHT);	//6
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FLYING_LEFT);	//7

		//Chạy
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_RUNNING_RIGHT);	//8
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_RUNNING_LEFT);	//9

		//Bay khi đạt tốc độ cao
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FLY_WHEN_RUNNING_RIGHT);	//10
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FLY_WHEN_RUNNING_LEFT);	//11

		//Mario đá rùa
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_KICK_RIGHT);	//12
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_KICK_LEFT);	//13

		//Ngồi
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_SITTING_RIGHT);	//14
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_SITTING_LEFT);	//15

		//Rơi
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FALLING_RIGHT);	//16
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_FALLING_LEFT);	//17

		//Giữ rùa IDLE
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_HOLD_IDLE_RIGHT);	//18
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_HOLD_IDLE_LEFT); //19

		//Giữ rùa Walking
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_HOLD_WALKING_RIGHT); //20
		listAni_mario_fire.push_back(MARIO_ANI_BIG_FIRE_HOLD_WALKING_LEFT); //21
	}
}

int CMarioGeneral::GetAni_Mario(int level,int index)
{
	IndexBBox = index;
	switch (level)
	{
	case MARIO_LEVEL_SMALL:
		return listAni_mario_small[index];
		break;
	case MARIO_LEVEL_BIG:
		return listAni_mario_big[index];
		break;
	case MARIO_LEVEL_BIG_TAIL:
		return listAni_mario_tail[index];
		break;
	case MARIO_LEVEL_BIG_FIRE:
		return listAni_mario_fire[index];
		break;
	}
	
}

void CMarioGeneral::GetBoundingBoxFromGroupAni(float& left, float& top, float& right, float& bottom,int level, int nx)
{
	switch (level)
	{
	case MARIO_LEVEL_SMALL:
		//left top khong doi
		right = left + MARIO_SMALL_BBOX_WIDTH;
		bottom = top + MARIO_SMALL_BBOX_HEIGHT;
		break;
	case MARIO_LEVEL_BIG:
		if (nx > 0) 
			left = left + 3;
		right = left + MARIO_BIG_BBOX_WIDTH;
		bottom = top + MARIO_BIG_BBOX_HEIGHT;
		break;
	case MARIO_LEVEL_BIG_TAIL:
		left += 8;
		right = left + MARIO_BIG_TAIL_BBOX_WIDTH;
		bottom = top + MARIO_BIG_TAIL_BBOX_HEIGHT;
		break;
	case MARIO_LEVEL_BIG_FIRE:
		if (nx > 0)
			left = left + 3;
		right = left + MARIO_BIG_BBOX_WIDTH;
		bottom = top + MARIO_BIG_BBOX_HEIGHT;
		break;
	}
	if ((IndexBBox == MARIO_ANI_SITTING_LEFT) || (IndexBBox == MARIO_ANI_SITTING_RIGHT))
		top = top + 8;
}


CMarioGeneral* CMarioGeneral::__instance = NULL;

CMarioGeneral* CMarioGeneral::GetInstance()
{
	if (__instance == NULL) __instance = new CMarioGeneral();
	return __instance;
}
