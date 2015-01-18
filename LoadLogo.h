#pragma once

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

using namespace cocos2d;

class CLoadLogo : public CCLayer
{
public:
	/**	��ʼ������	*/
    virtual bool init();  

	/**	����	*/
    static CCScene* scene();

	/**	��������	*/
    CREATE_FUNC(CLoadLogo);

private:
	/**	�л�����	*/
	void makeTransition(float dt);
};

