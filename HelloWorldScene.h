#pragma once

#include "cocos2d.h"
using namespace cocos2d;
#include "Joystick.h"

class HelloWorld : public Layer
{
private:
	Sprite* spr;
	Joystick* joystick;

public:
	static Scene* createScene();

	virtual bool init();
	CREATE_FUNC(HelloWorld);
};