
#ifndef __ToGetWater_H__
#define __ToGetWater_H__


#include "cocos2d.h"
USING_NS_CC;
class ToGetWater :public CCLayer
{
public:
	static CCScene * scene();
	CREATE_FUNC(ToGetWater);
	bool init();

	void update(float);

	void mySchedule(float dt);

	bool flag;
};


#endif