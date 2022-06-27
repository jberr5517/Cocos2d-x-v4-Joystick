/*********************************************************************
* Date : 2016.04.03
* Name : Joystick (Cocos2d-X ver 3.X)
* Email : kyechan99@naver.com
* GitHub : https://github.com/kyechan99/Joystick_Lib
* Description : http://blog.naver.com/kyechan99/220492857669
* This is Open Source, plz sharing if u know better way

* Modified List
* Date : 2016.04.26
* Name : Joystick (Cocos2d-X ver 3.X)
* Email : mark4215@naver.com
* GitHub : https://github.com/haminjun/Joystick_Lib
* By registering listeners to replace the touch inner class
* Registration / release a scheduler inside
***********************************************************************/
#pragma once
#include "cocos2d.h"
using namespace cocos2d;

class Joystick : public Layer
{
private:
	Sprite* joystick_limit;		// Joystick - back Sprite
	Sprite* joystick_control;	// Joystick - front Sprite
	Sprite* mainChar;			// Joystick - character

private:
	Vec2 controlerPos;			// Joystick - controler position
	Vec2 centerPos;				// Joystick - center position

private:
	float _speed;				// speed
	bool _isTouch;
	bool _isTouchShow;			// show joystick (onTouchBegan)
	bool _isLimmitWinSize;		// limit move
	Size _winSize;

public:
	Joystick() {};
	~Joystick();

	virtual bool init();

	/*
	@brief : joystick update
	*/
	void update(float dt);

	/*
	@brief : set character
	*/
	void setMainChar(Sprite* mainChar);

	/*
	@brief : character speed (standard : 0.1f)
	*/
	void setSpeed(float speed);

	/*
	@brief : true - show touch began
	*/
	void setTouchShow(bool check);

	/*
	@brief : true - limit win size
	*/
	void setLimitScreen(bool check);



	bool checkLimit();

	bool isTouchCircle(Point pos, Point center, float radius);

	virtual void onTouchesBegan(const std::vector<Touch*> &touches, Event* unused_event) override;
	virtual void onTouchesMoved(const std::vector<Touch*> &touches, Event* unused_event) override;
	virtual void onTouchesEnded(const std::vector<Touch*> &touches, Event* unused_event) override;
	CREATE_FUNC(Joystick);
};