#ifndef __UserSelect_H__
#define __UserSelect_H__

#include "Common.h"

class UserSelect : public CCLayer
{
public:
	CREATE_FUNC(UserSelect);
	bool init();

	void Start(CCObject* sender);
	void About(CCObject* sender);
	void Quit(CCObject* sender);
	void Ligth(CCObject* sender);
	void SceneChange(CCLayer* Layer);
	void songcan(CCObject* sender);
	void tochiken(CCObject* sender);
	void togetwater(CCObject* sender);
	void waitocharge(CCObject* sender);
	void BackStart(CCObject* sender);
public:
	//tablew位置
	void t1(CCObject*);
	void t2(CCObject*);
	void t3(CCObject*);
	void t4(CCObject*);
	void t5(CCObject*);
	void t6(CCObject*);
	void b1(CCObject*);
	void b2(CCObject*);
public:
	void l1(CCObject*);//充电
	void c(CCObject*);//厨房
	void w(CCObject*);//送酒水
public:
	//int socketHandle = 1;
	int sent(char * str);
};

#endif