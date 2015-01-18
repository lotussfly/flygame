#pragma once

#include "RoleSprite.h"

// �̳�CCSprite CCAnimation:create �ᱨ��
class CEnemySprite : public CRoleSprite
{
public:
	/**	��ʼ������ */
	bool init(int iType);

	/**	��������	*/
	static CEnemySprite* create(int iType);

protected:
	/**	���º���	*/
	void update(float dt);

	/**	��������	*/
	void setAttr();

	/**	�����ƶ��켣	*/
	void setRun(float dt);

	/**	 ���þ�������	*/
	void setDelFunc(CCNode* sender);

	/**	�ӵ�����	*/
	virtual void shoot(float dt);

	/**	����	*/
	virtual void destroy(CCNode *pSender);

	int m_iScore;			///<ɱ������õķ���
	int m_iMoveType;		///<�ƶ��켣����
	
};
