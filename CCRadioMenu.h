//
//  CCRadioMenu.h
//  SceneHello
//
//  Created by Orangef on 12-12-24.
//
//

#ifndef __SceneHello__CCRadioMenu__
#define __SceneHello__CCRadioMenu__

#include "cocos2d.h"
class CCRadioMenu : public cocos2d::CCMenu{
public:
	CCRadioMenu():cocos2d::CCMenu(){}
	cocos2d::CCMenuItem *_curHighlighted;
	virtual bool onTouchBegan(cocos2d::CCTouch *pTouch,cocos2d::CCEvent *pEvent);
	virtual void onTouchEnded(cocos2d::CCTouch *pTouch,cocos2d::CCEvent *pEvent);
	virtual void onTouchCancelled(cocos2d::CCTouch *pTouch,cocos2d::CCEvent *pEvent);
	virtual void onTouchMoved(cocos2d::CCTouch *pTouch,cocos2d::CCEvent *pEvent);
	void setSelectedItem_(cocos2d::CCMenuItem *item);

	static CCRadioMenu* create();
	//static CCRadioMenu* create(cocos2d::CCMenuItem* item, ...);
	//static CCRadioMenu* createWithItems(cocos2d::CCMenuItem *firstItem, va_list args);
	//static CCRadioMenu* createWithArray(const cocos2d::Vector<CCMenuItem*>& arrayOfItems);
};


#endif /* defined(__SceneHello__CCRadioMenu__) */
