#pragma once

#include "cocos2d.h"

#include "EnemySprite.h"
#include "BossSprite.h"


using namespace cocos2d;

class CEnemyManager : public CCLayer
{
public:
	/**	��ʼ������	*/
    virtual bool init();

	/**	��ȡ�����б�	*/
	CCSpriteBatchNode* getEnemyList(){return m_pEnemyList;}
	
	/**	��ȡTag����ֵ	*/
	int getCount(){return m_iEnemyCout;}

	/**	��������	*/
	CREATE_FUNC(CEnemyManager);

private:
	/**	���º���	*/
	void update(float dt);

	/**	���һֻ����	*/
	void addEnemy();

	/**	����BOSS	*/
	void createBoss(float dt);

	/**	�����µ���	*/
	void createNewEnemys(float dt);

	CCSpriteBatchNode* m_pEnemyList;	///<�����б�����BOSS��
	int	m_iEnemyCout;					///<Tag�ļ���ֵ
};
