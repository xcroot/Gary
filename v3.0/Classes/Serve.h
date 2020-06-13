#ifndef __Serve_H__
#define __Serve_H__


#include "cocos2d.h"
USING_NS_CC;
class Serve :public CCLayer
{
public:
	static CCScene * scene();
	CREATE_FUNC(Serve);
	bool init();

	void update(float);

	void mySchedule(float dt);
	
	bool flag;
};


#endif