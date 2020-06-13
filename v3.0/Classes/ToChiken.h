#ifndef __ToChiken_H__
#define __ToChiken_H__


#include "cocos2d.h"
USING_NS_CC;
class ToChiken :public CCLayer
{
public:
	static CCScene * scene();
	CREATE_FUNC(ToChiken);
	bool init();

	void update(float);

	void mySchedule(float dt);

	bool flag;
};


#endif