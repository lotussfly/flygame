#pragma once
#include "UnitSprite.h"

enum
{
	LEFT,
	STRAIGHT,
	RIGHT,
};
enum
{
	PLAYER,
	ENEMY,
};

class CRoleSprite : public CUnitSprite
{
public:
	/**	���˺�	*/
	void hurt(int iHarm);

	/**	�Ƿ�����	*/
	bool isDestroy(){return m_bDestroy;}

protected:
	/**	���÷��ж���	*/
	void setFlyAnimation(int iDirection);

	/**	 ���þ�������	*/
	void setDelFunc(CCNode* sender);

	/**	�����ӵ�	*/
	virtual void shoot(float dt) = 0;

	/**	��ը	*/
	void explosion();

	/**	����	*/
	virtual void destroy(CCNode *pSender) = 0;

	/**	�ı���ж���	*/
	void changeFlyAnimation(float dt);

	/**	��ȡ���з���	*/
	int getDirection();

	int m_iHpMax;			///<HP����
	int m_iHp;				///<HP
	int m_iType;			///<�ɻ�����
	bool m_bDestroy;		///<�Ƿ�����
	float m_fShootSpace;	///<�����ӵ����
	CCPoint m_pos;			///<��ʼ������
	int m_iBulletType;		///<�ӵ�����
	int m_iFlyStraightNum;	///<ֱ�ɶ���֡��
	int m_iFlyLeftNum;		///<��ɶ���֡��
	int m_iLife;			///<������
	int m_iDirection;		///<���з���
	int m_iBulletNum;		///<�ӵ�����
	CCSprite *m_pExplosion;	///<��ը����
	
};
