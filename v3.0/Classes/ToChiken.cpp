#include "ToChiken.h"
#include "AppMacros.h"
#include "SceneStart.h"

#include "SimpleAudioEngine.h"
using namespace CocosDenshion;


CCScene *ToChiken::scene()
{
	CCScene * scene = CCScene::create();
	Serve * layer = Serve::create();
	scene->addChild(layer);
	return scene;
}
bool ToChiken::init()
{

	CCLayer::init();
	flag = true;
	//scheduleUpdate();  unScheduleUpdate();
	//scheduleOnce(schedule_selector(T07Schedule::mySchedule), 2);
	schedule(schedule_selector(Serve::mySchedule));
	//功能等同scheduleUpdate(); 回调函数可以自定义
	//schedule(schedule_selector(T07Schedule::mySchedule), 3);
	//CCNode::schedule(SEL_SCHEDULE selector, float interval, unsigned int repeat, float delay)
	//schedule(schedule_selector(T07Schedule::mySchedule), 1, 10, 4);
	//4s以后,每隔1s执行一次回调.共执行10次
	Util::addBackground("waittochicken.png", this);
	//Sleep(1000);
#if 0
	CCSprite * spr = CCSprite::create("tertlebot2.png");
#endif
	CCSprite * spr = CCSprite::create("tertlebot2.png");
	//CCActionInterval* wavesTiles3D = CCWavesTiles3D::create(5, CCSize(10, 10), 10, 20);
	//CCActionInterval* ripple = CCRipple3D::create(5, CCSize(10, 10), CCPointMake(240, 160), 240, 4, 160);
	//CCActionInterval* liquid = CCLiquid::create(5, CCSize(10, 10), 4, 20);
	//spr->runAction(liquid);
#if 0
	spr->setPosition(ccp(100, winSize.height / 2));
#endif
	spr->setPosition(ccp(100, winSize.height / 2+62));
	addChild(spr);
	spr->setTag(100);

	//CCMoveBy * by = CCMoveBy::create(2, ccp(300, 0));
	//CCMoveBy * by1 = (CCMoveBy *)by->reverse();
	//CCSequence *seq = CCSequence::create(by, by1, NULL);
	//spr->runAction(CCRepeatForever::create(seq));
	return true;
}

void ToChiken::update(float dt)
{
	CCLog("dt = %g", dt);
	int i = 0;
	i++;
	if (i == 120)
	{
		unscheduleUpdate();
		CCLog("schedule is over");
		switchScene(SceneStart);
	}
}

void ToChiken::mySchedule(float dt)
{
	CCSprite * spr = (CCSprite *)getChildByTag(100);
	float v = 300 / 3;

	static int count = 0;
	count++;


	if (flag)
	{
		if ((spr->getPositionX() + v*dt) < 900)
		{
			spr->setPositionX(spr->getPositionX() + v*dt);
		}
		else
		{
			flag = !flag;
		}
	}
	/*if (!flag)
	{
	if ((spr->getPositionX() - v*dt) > 100)
	{
	spr->setPositionX(spr->getPositionX() - v*dt);
	}
	else
	{
	flag = !flag;
	}
	}*/

	if (count % 500 == 499)
	{
		count = 0;
		flag = !flag;
		unschedule(schedule_selector(Serve::mySchedule));
		//SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
		CCTransitionScene *reScene = NULL;
		CCScene* scene = CCScene::create();
		//reScene = CCTransitionSlideInL::create(1, scene);//推出覆盖
		//reScene = CCTransitionJumpZoom::create(0.5, scene);
#if 0
		reScene = CCTransitionZoomFlipAngular::create(1, scene);//同上，有角度带缩放的翻转
		SceneStart *layer = SceneStart::create();
#endif
		reScene = CCTransitionSlideInT::create(1, scene);
		UserSelect *layer = UserSelect::create();
		scene->addChild(layer);
		CCDirector::sharedDirector()->replaceScene(reScene);
		//switchScene(SceneStart);
	}
}




