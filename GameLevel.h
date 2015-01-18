#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

// ��һ�б����Ǽ���
using namespace cocos2d;

enum{
	LEVEL_ONE = 1, 
	LEVEL_TWO,  
	LEVEL_THREE,    
};

class CGameLevel : public Layer
{
public:
	/**	��ʼ������	*/
    virtual bool init();  

	/**	����	*/
    static CCScene* scene();

	/**	��������	*/
	CREATE_FUNC(CGameLevel);

private:
	/**	ѡ��ؿ��Ļص�����	*/
	void setLevelMode(CCObject* pSender);

	/**	��ʼ��ť�Ļص�����	*/
	void setLevelStart(CCObject* pSender);

	/**	���ذ�ť�Ļص�����	*/
	void back(CCObject* pSender);

	CCParticleSun* m_pSun;		///<̫����Ч

};