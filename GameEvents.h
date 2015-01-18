#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

// ��������ת����Ҫ�Ŀ⣬���������ټ�һ����libiconv.lib
//#include "iconv/iconv.h"

#include "GameLevel.h"

using namespace cocos2d;

enum{
	GAME_MENU = 1,  // ��Ϸ�˵�,
	GAME_LEVEL,     // ��Ϸ�ؿ�
	GAME_START,     // ��Ϸ��ʼ
	GAME_OVER,      // ��Ϸ����
};
extern int g_iGameLevel;		// ��Ϸ�ؿ�

class CGameEvents : public CCLayer
{
public:
	/**	��ʼ����	*/
	static void startFlipInterface(int iType);
	
	/**	��������	*/
    CREATE_FUNC(CGameEvents);

};