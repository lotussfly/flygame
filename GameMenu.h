#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

using namespace cocos2d;

class CGameMenu : public Layer
{
public:
	/**	��ʼ������	*/
    virtual bool init();  

	/**	����	*/
    static CCScene* scene();

    CREATE_FUNC(CGameMenu);

private:
	/**	��ʼ��ť�Ļص�����	*/
    void menuStartCallback(CCObject* pSender);

	/**	���ð�ť�Ļص�����	*/
	void menuOptionCallback(CCObject* pSender);

	/**	�˳���ť�Ļص�����	*/
	void menuExitCallback(CCObject* pSender);

	/**	��ʯ�ƶ�	*/
	void move(float dt);

	CCParticleSun* m_pMeteorolite;		///<��ʯ��Ч
};
