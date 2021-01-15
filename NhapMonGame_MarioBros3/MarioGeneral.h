#pragma once
#include <vector>
#include <istream>



#define MARIO_STATE_IDLE								0
#define MARIO_STATE_WALKING_RIGHT						100
#define MARIO_STATE_WALKING_LEFT						200
#define MARIO_STATE_JUMPING								300
#define MARIO_ANI_SHORT_JUMP							301
#define MARIO_STATE_BIG_TAIL_KEEP_JUMP_FALL_SLOW		302
#define MARIO_STATE_BIG_TAIL_KEEP_JUMP_FLY_HIGHT		303
#define MARIO_STATE_FALLING								310
#define MARIO_STATE_DIE									400
#define MARIO_STATE_SITTING								500
#define MARIO_STATE_STOP_SITTING						501
#define MARIO_STATE_WALKING								600
#define MARIO_STATE_NOT_WALKING							601
#define MARIO_STATE_RUNNING								700
#define MARIO_STATE_STOP_RUNNING						701
#define MARIO_STATE_DECREASE_WHEN_RUNNING				702
#define MARIO_STATE_BIG_TAIL_ATTACK						800
#define MARIO_STATE_BIG_FIRE_ATTACK						900
#define MARIO_STATE_KICK								1000
#define MARIO_STATE_GO_HIDDEN_MAP						1100
#define MARIO_STATE_GO_MAIN_MAP							1200
#define MARIO_STATE_ELASETIC							1300
#define MARIO_STATE_GO_ENDSCENCE						1400
#define MARIO_STATE_GO_SELECT_MAP						9999

//================================MARIO ANI GENERAL ZONE=================================
#define MARIO_ANI_IDLE_RIGHT							0
#define MARIO_ANI_IDLE_LEFT								1
#define MARIO_ANI_WALKING_RIGHT							2
#define MARIO_ANI_WALKING_LEFT							3
#define MARIO_ANI_STOP_RIGHT							4
#define MARIO_ANI_STOP_LEFT								5
#define MARIO_ANI_FLYING_RIGHT							6
#define MARIO_ANI_FLYING_LEFT							7
#define MARIO_ANI_RUNNING_RIGHT							8
#define MARIO_ANI_RUNNING_LEFT							9
#define MARIO_ANI_FLY_WHEN_RUNNING_RIGHT				10
#define MARIO_ANI_FLY_WHEN_RUNNING_LEFT					11
#define MARIO_ANI_KICK_RIGHT							12
#define MARIO_ANI_KICK_LEFT								13
#define MARIO_ANI_SITTING_RIGHT							14
#define MARIO_ANI_SITTING_LEFT							15
#define MARIO_ANI_FALLING_RIGHT							16
#define MARIO_ANI_FALLING_LEFT							17
#define MARIO_ANI_HOLD_IDLE_RIGHT						18				
#define MARIO_ANI_HOLD_IDLE_LEFT						19
#define MARIO_ANI_HOLD_WALKING_RIGHT					20
#define MARIO_ANI_HOLD_WALKING_LEFT						21
#define MARIO_ANI_HOLD_FLYING_RIGHT						22
#define MARIO_ANI_HOLD_FLYING_LEFT						23
#define MARIO_ANI_GO_HIDDEN_MAP							24
#define MARIO_ANI_SELECT_MAP							25

////================================END MARIO ANIMATION GENERAL ZONE=================================



//==========================================MARIO SMALL============
#define MARIO_ANI_DIE									104
#define MARIO_ANI_SMALL_SELECT_MAP						109
#define MARIO_ANI_SMALL_GO_HIDDEN_MAP					105
#define MARIO_ANI_SMALL_IDLE_RIGHT						0
#define MARIO_ANI_SMALL_IDLE_LEFT						1
#define MARIO_ANI_SMALL_WALKING_RIGHT					2
#define MARIO_ANI_SMALL_WALKING_LEFT					3
#define MARIO_ANI_SMALL_STOP_RIGHT						4
#define MARIO_ANI_SMALL_STOP_LEFT						5
#define MARIO_ANI_SMALL_FLYING_RIGHT					6
#define MARIO_ANI_SMALL_FLYING_LEFT						7
#define MARIO_ANI_SMALL_RUNNING_RIGHT					8
#define MARIO_ANI_SMALL_RUNNING_LEFT					9
#define MARIO_ANI_SMALL_FLY_WHEN_RUNNING_RIGHT			10
#define MARIO_ANI_SMALL_FLY_WHEN_RUNNING_LEFT			11
#define MARIO_ANI_SMALL_KICK_RIGHT						12
#define MARIO_ANI_SMALL_KICK_LEFT						13
#define MARIO_ANI_SMALL_HOLD_IDLE_RIGHT					80
#define MARIO_ANI_SMALL_HOLD_IDLE_LEFT					81
#define MARIO_ANI_SMALL_HOLD_WALKING_RIGHT				82
#define MARIO_ANI_SMALL_HOLD_WALKING_LEFT				83
#define MARIO_ANI_SMALL_HOLD_FLYING_RIGHT				96
#define MARIO_ANI_SMALL_HOLD_FLYING_LEFT				97



//=======================================MARIO BIG================
#define MARIO_ANI_BIG_GO_HIDDEN_MAP						106
#define MARIO_ANI_BIG_IDLE_RIGHT						14
#define MARIO_ANI_BIG_IDLE_LEFT							15
#define MARIO_ANI_BIG_WALKING_RIGHT						16
#define MARIO_ANI_BIG_WALKING_LEFT						17
#define MARIO_ANI_BIG_STOP_RIGHT						18
#define MARIO_ANI_BIG_STOP_LEFT							19
#define MARIO_ANI_BIG_FLYING_RIGHT						20
#define MARIO_ANI_BIG_FLYING_LEFT						21
#define MARIO_ANI_BIG_RUNNING_RIGHT						22
#define MARIO_ANI_BIG_RUNNING_LEFT						23
#define MARIO_ANI_BIG_FLY_WHEN_RUNNING_RIGHT			24
#define MARIO_ANI_BIG_FLY_WHEN_RUNNING_LEFT				25
#define MARIO_ANI_BIG_KICK_RIGHT						26
#define MARIO_ANI_BIG_KICK_LEFT							27
#define MARIO_ANI_BIG_SITTING_RIGHT						28
#define MARIO_ANI_BIG_SITTING_LEFT						29
#define MARIO_ANI_BIG_FALLING_RIGHT						30
#define MARIO_ANI_BIG_FALLING_LEFT						31
#define MARIO_ANI_BIG_HOLD_IDLE_RIGHT					84
#define MARIO_ANI_BIG_HOLD_IDLE_LEFT					85
#define MARIO_ANI_BIG_HOLD_WALKING_RIGHT				86
#define MARIO_ANI_BIG_HOLD_WALKING_LEFT					87
#define MARIO_ANI_BIG_HOLD_FLYING_RIGHT					98
#define MARIO_ANI_BIG_HOLD_FLYING_LEFT					99

//=====================================MARIO BIG TAIL
#define MARIO_ANI_BIG_TAIL_GO_HIDDEN_MAP				107
#define MARIO_ANI_BIG_TAIL_IDLE_RIGHT					32
#define MARIO_ANI_BIG_TAIL_IDLE_LEFT					33
#define MARIO_ANI_BIG_TAIL_WALKING_RIGHT				34		
#define MARIO_ANI_BIG_TAIL_WALKING_LEFT					35	
#define MARIO_ANI_BIG_TAIL_STOP_RIGHT					36	
#define MARIO_ANI_BIG_TAIL_STOP_LEFT					37		
#define MARIO_ANI_BIG_TAIL_FLYING_RIGHT					38	
#define MARIO_ANI_BIG_TAIL_FLYING_LEFT					39	
#define MARIO_ANI_BIG_TAIL_RUNNING_RIGHT				40	
#define MARIO_ANI_BIG_TAIL_RUNNING_LEFT					41	
#define MARIO_ANI_BIG_TAIL_FLY_WHEN_RUNNING_RIGHT		42	
#define MARIO_ANI_BIG_TAIL_FLY_WHEN_RUNNING_LEFT		43		
#define MARIO_ANI_BIG_TAIL_KICK_RIGHT					44	
#define MARIO_ANI_BIG_TAIL_KICK_LEFT					45		
#define MARIO_ANI_BIG_TAIL_SITTING_RIGHT				46		
#define MARIO_ANI_BIG_TAIL_SITTING_LEFT					47	
#define MARIO_ANI_BIG_TAIL_FALLING_RIGHT				48		
#define MARIO_ANI_BIG_TAIL_FALLING_LEFT					49	
#define MARIO_ANI_BIG_TAIL_ATTACK_RIGHT					50	
#define MARIO_ANI_BIG_TAIL_ATTACK_LEFT					51	
#define MARIO_ANI_BIG_TAIL_KEEPJUMP_FALLING_RIGHT		52			
#define MARIO_ANI_BIG_TAIL_KEEPJUMP_FALLING_LEFT		53		
#define MARIO_ANI_BIG_TAIL_FALLING_WHEN_RUNNING_RIGHT	54				
#define MARIO_ANI_BIG_TAIL_FALLING_WHEN_RUNNING_LEFT	55				
#define MARIO_ANI_BIG_TAIL_KEEPJUMP_FLYING_RIGHT		56		
#define MARIO_ANI_BIG_TAIL_KEEPJUMP_FLYING_LEFT			57	
#define MARIO_ANI_BIG_TAIL_HOLD_IDLE_RIGHT				88
#define MARIO_ANI_BIG_TAIL_HOLD_IDLE_LEFT				89
#define MARIO_ANI_BIG_TAIL_HOLD_WALKING_RIGHT			90
#define MARIO_ANI_BIG_TAIL_HOLD_WALKING_LEFT			91
#define MARIO_ANI_BIG_TAIL_HOLD_FLYING_RIGHT			100
#define MARIO_ANI_BIG_TAIL_HOLD_FLYING_LEFT				101

//======================================MARIO BIG FIRE
#define MARIO_ANI_BIG_FIRE_GO_HIDDEN_MAP				108
#define MARIO_ANI_BIG_FIRE_IDLE_RIGHT					58
#define MARIO_ANI_BIG_FIRE_IDLE_LEFT					59
#define MARIO_ANI_BIG_FIRE_WALKING_RIGHT				60		
#define MARIO_ANI_BIG_FIRE_WALKING_LEFT					61	
#define MARIO_ANI_BIG_FIRE_STOP_RIGHT					62	
#define MARIO_ANI_BIG_FIRE_STOP_LEFT					63		
#define MARIO_ANI_BIG_FIRE_FLYING_RIGHT					64	
#define MARIO_ANI_BIG_FIRE_FLYING_LEFT					65	
#define MARIO_ANI_BIG_FIRE_RUNNING_RIGHT				66	
#define MARIO_ANI_BIG_FIRE_RUNNING_LEFT					67	
#define MARIO_ANI_BIG_FIRE_FLY_WHEN_RUNNING_RIGHT		68	
#define MARIO_ANI_BIG_FIRE_FLY_WHEN_RUNNING_LEFT		69		
#define MARIO_ANI_BIG_FIRE_KICK_RIGHT					70	
#define MARIO_ANI_BIG_FIRE_KICK_LEFT					71		
#define MARIO_ANI_BIG_FIRE_SITTING_RIGHT				72		
#define MARIO_ANI_BIG_FIRE_SITTING_LEFT					73	
#define MARIO_ANI_BIG_FIRE_FALLING_RIGHT				74		
#define MARIO_ANI_BIG_FIRE_FALLING_LEFT					75	
#define MARIO_ANI_BIG_FIRE_ATTACK_ONGROUND_RIGHT		76	
#define MARIO_ANI_BIG_FIRE_ATTACK_ONGROUND_LEFT			77	
#define MARIO_ANI_BIG_FIRE_ATTACK_ONAIR_RIGHT			78
#define MARIO_ANI_BIG_FIRE_ATTACK_ONAIR_LEFT			79
#define MARIO_ANI_BIG_FIRE_HOLD_IDLE_RIGHT				92
#define MARIO_ANI_BIG_FIRE_HOLD_IDLE_LEFT				93
#define MARIO_ANI_BIG_FIRE_HOLD_WALKING_RIGHT			94
#define MARIO_ANI_BIG_FIRE_HOLD_WALKING_LEFT			95
#define MARIO_ANI_BIG_FIRE_HOLD_FLYING_RIGHT			102
#define MARIO_ANI_BIG_FIRE_HOLD_FLYING_LEFT				103




//================================MARIO LEVEL GENERAL ZONE=================================
#define	MARIO_LEVEL_SMALL								1
#define	MARIO_LEVEL_BIG									2
#define	MARIO_LEVEL_BIG_TAIL							3
#define	MARIO_LEVEL_BIG_FIRE							4

//================================MARIO RENDER BOX GENERAL ZONE=================================
#define MARIO_BIG_BBOX_WIDTH							15
#define MARIO_BIG_BBOX_HEIGHT							26
#define MARIO_BIG_TAIL_BBOX_WIDTH						15
#define MARIO_BIG_TAIL_BBOX_HEIGHT						27
#define MARIO_BIG_BBOX_SITTING_HEIGHT					14
#define MARIO_BIG_TAIL_BBOX_SITTING_HEIGHT				20
#define MARIO_SMALL_BBOX_WIDTH							12
#define MARIO_SMALL_BBOX_HEIGHT							15


//BBOX OTHER
#define MARIO_BIG_BBOX_LEFT	5
#define MARIO_BIG_BBOX_WIDTH_RIGHT	20
#define MARIO_SIT_BBOX	8
#define MARIO_BIG_SIT_BBOX_HEIGHT	18
#define MARIO_RACCOON_BBOX_HEIGHT	27
#define MARIO_RACCOON_BBOX_WIDTH	15
#define MARIO_RACCOON_BBOX_SIT	9
#define MARIO_RACCOON_SIT_BBOX_HEIGHT	18
#define MARIO_RACCOON_BBOX_WIDTH_RIGHT	15
#define MARIO_RACCOON_BBOX_LEFT	7
#define MARIO_RACCOON_BBOX_WIDTH_RIGHT	15
#define MARIO_FIRE_BBOX_WIDTH	15
#define MARIO_FIRE_BBOX_HEIGHT	26
#define MARIO_FIRE_SIT_BBOX_HEIGHT	18


//================================ANOTHER GENERAL ZONE=================================
#define MARIO_UNTOUCHABLE_TIME							5000
#define MARIO_RATIO_WHEN_SPEEPUPING					0.75f
#define MARIO_RATIO_WHEN_SPEED_MAX					0.01f
#define MARIO_RATIO_WHEN_KEEP_JUMPPING				0.5f
#define MARIO_UNTOUCHABLE_TIME							1000
#define KOOPAS_MAX_HEALTH								2
#define MARIO_TIME_ALLOWED_FLY						1800
#define MARIO_TIME_FLYING_MAX						4500
#define MARIO_TIME_KICK									200
#define MARIO_TIME_BIG_TAIL_ATTACK						375
#define MARIO_TIME_BIG_FIRE_ATTACK_ON_GROUND			75
#define MARIO_TIME_BIG_FIRE_ATTACK_ON_AIR				200

#define DIRECT_RIGHT									1
#define DIRECT_LEFT									2
#define DIRECT_UP									3
#define DIRECT_DOWN									4
#define MARIO_SPEED_SELECT_MAP						0.1f


//D
#define MARIO_D_HEED_TO_HAND_ATTACK						12
#define MARIO_D_HEED_TO_TAIL_ATTACK						16

using namespace std;
class CMarioGeneral
{
	static CMarioGeneral* __instance;
	int IndexBBox;
public:
	CMarioGeneral();
	vector<int> listAni_mario_small;
	vector<int> listAni_mario_big;
	vector<int> listAni_mario_tail;
	vector<int> listAni_mario_fire;
	void LoadListAni();
	int GetAni_Mario(int level,int index);
	void GetBoundingBoxFromGroupAni(float& left, float& top, float& right, float& bottom, int level, int nx);
	static CMarioGeneral* GetInstance();
};

