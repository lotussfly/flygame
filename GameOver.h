#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"
using namespace cocos2d;

class CGameOver : public CCLayer
{
public:
	/**	��ʼ������	*/
	virtual bool init();

	/**	����	*/
	static CCScene* scene();

	/**	��������	*/
	CREATE_FUNC(CGameOver);

private:
	/**	���ذ�ť�Ļص�����	*/
	void back(CCObject* pSender);
};
