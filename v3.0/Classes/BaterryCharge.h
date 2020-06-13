
#ifndef __BaterryCharge_H__
#define __BaterryCharge_H__


#include "cocos2d.h"
USING_NS_CC;
class BaterryCharge :public CCLayer
{
public:
	static CCScene * scene();
	CREATE_FUNC(BaterryCharge);
	bool init();

	void update(float);

	void mySchedule(float dt);

	bool flag;
};


#endif