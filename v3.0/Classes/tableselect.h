#ifndef __tableselect_H__
#define __tableselect_H__


#include "Common.h"

class tableselect : public CCLayer
{
public:
	CREATE_FUNC(tableselect);
	bool init();

	void Start(CCObject* sender);
	void About(CCObject* sender);
	void Quit(CCObject* sender);
	void Ligth(CCObject* sender);
	void SceneChange(CCLayer* Layer);
	void BackStart(CCObject* sender);
	void BackSlect(CCObject* sender);
public:
	//tablewλ��
	void t1(CCObject*);
	void t2(CCObject*);
	void t3(CCObject*);
	void t4(CCObject*);
	void t5(CCObject*);
	void t6(CCObject*);
	void t7(CCObject*);
	void t8(CCObject*);
	void t9(CCObject*);
	void t10(CCObject*);
	void t11(CCObject*);
	void t12(CCObject*);
	void b1(CCObject*);
	void b2(CCObject*);
public:
	void l1(CCObject*);//���
	void c(CCObject*);//����
	void w(CCObject*);//�;�ˮ
public:
	//int socketHandle = 1;
	int sent(char * str);
};

#endif