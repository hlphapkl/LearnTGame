#pragma once
#include "Game.h"
#include "Textures.h"
#include "Scence.h"
#include "GameObject.h"
#include "Brick.h"
#include "Ground.h"
#include "WeakBrick.h"
#include "CloudBrick.h"
#include "ColorBox.h"
#include "Pipe.h"
#include "Mario.h"
#include "Goomba.h"
#include "Koopas.h"
#include "Flower.h"
#include "QuestionBrick.h"
#include "TileMap.h"
#include "Tail.h"
#include "Weapon.h"
#include "Camera.h"
#include "Effect.h"
#include "ScoreEffect.h"
#include "ScoreBoard.h"
#include "Tree.h"
#include "PitStop.h"
#include "ItemEndGame.h"

#define SCENE_SECTION_UNKNOWN -1
#define SCENE_SECTION_TEXTURES 2
#define SCENE_SECTION_SPRITES 3
#define SCENE_SECTION_ANIMATIONS 4
#define SCENE_SECTION_ANIMATION_SETS	5
#define SCENE_SECTION_OBJECTS	6
#define SCENE_SECTION_TILEMAP	7

#define OBJECT_TYPE_MARIO			0
#define OBJECT_TYPE_BRICK			1
#define OBJECT_TYPE_GOOMBA			2
#define OBJECT_TYPE_KOOPAS			3
#define OBJECT_TYPE_FLOWER			4
#define OBJECT_TYPE_GROUND			5
#define OBJECT_TYPE_COLORBOX		6
#define OBJECT_TYPE_PIPE			7
#define OBJECT_TYPE_QUESTIONBRICK	8
#define OBJECT_TYPE_WEAK_BRICK		9
#define OBJECT_TYPE_CLOUD_BRICK		10
#define OBJECT_TYPE_COIN_SPIN		11
#define OBJECT_TYPE_BULLET			12
#define OBJECT_TYPE_TREE			13
#define	OBJECT_TYPE_ITEM_ENDSCENCE	14
#define OBJECT_TYPE_BOUNDARYBRICK	9999

#define OBJECT_TYPE_PITSTOP	49
#define OBJECT_TYPE_PORTAL	50

#define MAX_SCENE_LINE 1024

class CPlayScene : public CScene
{
public:
	CMario* player;					// A play scene has to have player, right? 
	TileMap *map;
	Camera* cam;
	CScoreBoard* board;
	DWORD timeStartScreenDark = TIME_DEFAULT;
	DWORD timeStartScreenLight = TIME_DEFAULT;
	bool isCompleteTransDark = false;
	bool isCompleteTransLight = false;


	bool isScreenDark = false;

	vector<LPGAMEOBJECT> listMapObj;
	vector<CGameObject *> listEnemies;
	vector<CGameObject *> listItems;
	vector<CGameObject *> listEffect;
	vector<LPGAMEOBJECT> listPipe;
	vector<CBullet*> listBullet;
	vector<LPGAMEOBJECT> listFireBall;
	vector<LPGAMEOBJECT> listPortal;

	void TransformDarkScreen();
	void TransformLightScreen();

	void _ParseSection_TEXTURES(string line);
	void _ParseSection_SPRITES(string line);
	void _ParseSection_ANIMATIONS(string line);
	void _ParseSection_ANIMATION_SETS(string line);
	void _ParseSection_OBJECTS(string line);
	void _ParseSection_TILEMAP(string line);



public:
	CPlayScene(int id, LPCWSTR filePath, int typeMap);

	virtual void Load();
	virtual void Update(DWORD dt);
	virtual void Render();
	virtual void Unload();
	
	CMario* GetPlayer() { return player; }



};

class CPlayScenceKeyHandler : public CScenceKeyHandler
{
public:
	virtual void KeyState(BYTE* states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);
	CPlayScenceKeyHandler(CScene* s) :CScenceKeyHandler(s) {};
};

