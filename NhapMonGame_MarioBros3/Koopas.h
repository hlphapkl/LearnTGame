#pragma once
#include "Enemy.h"
#include "KoopasGeneral.h"
#include "WeakBrick.h"
#define KOOPAS_WALKING_SPEED 0.03f
#define KOOPAS_RUNNING_WHEN_KICKED 0.15f
#define KOOPAS_JUMP_DEFLECT_SPEED	0.2f
#define KOOPAS_SPEED_BOUNCE			0.2f

#define KOOPAS_BBOX_WIDTH 16
#define KOOPAS_BBOX_HEIGHT 26
#define KOOPAS_BBOX_HEIGHT_SLEEP 11
#define KOOPAS_STATE_MOVING 100
#define KOOPAS_STATE_DIE 200
#define KOOPAS_STATE_SLEEP 300




class CKoopas : public CEnemy
{
public:
	CKoopasGeneral* koopasGeneral;
	CWeakBrick* weakBrickDeployed = NULL;
	int typeColor;
	int level;
	int rangeX;
	int rangeY;
	bool isDeployWeakBrick = false;
	DWORD timeStartSleep = TIME_DEFAULT;
public:
	bool isMoving = true;
	bool isKicked = false;
	bool isSleeping = false;
	bool isHeld = false;
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	void Update(DWORD dt, vector<LPGAMEOBJECT>* colliable_objects = NULL);
	void IsCollisionWhenShellMove(vector<LPGAMEOBJECT>* listMapObj, vector<LPGAMEOBJECT>* listEnemies, vector<LPGAMEOBJECT>* listEffect);
    void Render();
	CKoopas(CMario *m, int type, int level);
	void SetState(int state);
};