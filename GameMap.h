#pragma once
#include "cocos2d.h"

using namespace cocos2d;

extern int g_iGameLevel;		// ��Ϸ�ؿ�

class CGameMap : public CCLayer
{
public:
	/**	��ʼ������	*/
	virtual bool init();

	/**	��ͼ��*/
	void shake();

	/**	��������	*/
	CREATE_FUNC(CGameMap);

private:
	CCSprite* m_pMap;	///<��ͼ����
};
