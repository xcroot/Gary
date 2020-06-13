#include "SceneStart.h"
#include "Common.h"
#include "SceneAbout.h"

#include "SimpleAudioEngine.h"
using namespace CocosDenshion;
bool SceneStart::init()
{
	CCLayer::init();

	// ����һ������ͼƬ
	Util::addBackground(IMAGE_background, this);
	SimpleAudioEngine::sharedEngine()->preloadEffect("audio/click4.wav");
	// �������˵���ť
	CCMenuItem* start = CCMenuItemImage::create("staruse1.png", "staruse2.png");
	CCMenuItem* about = CCMenuItemImage::create("abrout1.png", "abrout2.png");
	//CCMenuItem* ligth = CCMenuItemImage::create(IMAGE_about_1, IMAGE_about_2);
	CCMenuItem* quit  = CCMenuItemImage::create("exit1.png", "exit2.png");
	CCMenu* menu = CCMenu::create(start, about ,quit, NULL);
	addChild(menu);
	// �Զ���ո�Ķ���
	menu->setPositionY(800);
	menu->alignItemsVerticallyWithPadding(20);

	// ������ť���ӻص�����
	start->setTarget(this, menu_selector(SceneStart::Start));//�Ӳ�
	about->setTarget(this, menu_selector(SceneStart::About));//����λ��
	//ligth->setTarget(this, menu_selector(SceneStart::Ligth));
	quit->setTarget(this, menu_selector(SceneStart::Quit));//���


	return true;
}

void SceneStart::Start(CCObject*)
{
	//SimpleAudioEngine::sharedEngine()->preloadEffect("audio/click4.wav");
	SimpleAudioEngine::sharedEngine()->playEffect("audio/click4.wav");
	CCTransitionScene *reScene = NULL;
	CCScene* scene = CCScene::create();
	//reScene = CCTransitionSlideInL::create(1, scene);//�Ƴ�����
	//reScene = CCTransitionJumpZoom::create(0.5, scene);
#if 0
	reScene = CCTransitionZoomFlipAngular::create(1, scene);//ͬ�ϣ��нǶȴ����ŵķ�ת
#endif
	reScene = CCTransitionSlideInT::create(1, scene);
	UserSelect *layer = UserSelect::create();
	scene->addChild(layer);
	CCDirector::sharedDirector()->replaceScene(reScene);
	//switchScene(SceneStart);
	//switchScene(UserSelect);
}

void SceneStart::About(CCObject*)
{
	
	SimpleAudioEngine::sharedEngine()->playEffect("audio/click4.wav");
//#if 0
	CCTransitionScene *reScene = NULL;
//#endif
	CCScene* scene = CCScene::create();
	//reScene = CCTransitionSlideInL::create(1, scene);//�Ƴ�����
	//reScene = CCTransitionJumpZoom::create(0.5, scene);
#if 0
	reScene = CCTransitionZoomFlipAngular::create(1, scene);//ͬ�ϣ��нǶȴ����ŵķ�ת
#endif
#if 0
	reScene = CCTransitionSplitRows::create(1, scene);
#endif
#if 0
	reScene = CCTransitionFade::create(1, scene, ccc3(255, 0, 0));
#endif
	reScene = CCTransitionSlideInT::create(1, scene);
	SceneAbout *layer = SceneAbout::create();

	scene->addChild(layer);

	CCDirector::sharedDirector()->replaceScene(reScene);
	//switchScene(SceneStart);
	//switchScene(SceneAbout);
}

void SceneStart::Quit(CCObject*)
{
	//exit(1);
	//SimpleAudioEngine::sharedEngine()->preloadEffect("audio/click4.wav");
	SimpleAudioEngine::sharedEngine()->playEffect("audio/click4.wav");
	CCDirector::sharedDirector()->end();
}

void SceneStart::Ligth(CCObject* sender)
{
	//SimpleAudioEngine::sharedEngine()->preloadEffect("audio/click4.wav");
	SimpleAudioEngine::sharedEngine()->playEffect("audio/click4.wav");
	CCTransitionScene *reScene = NULL;
	CCScene* scene = CCScene::create();
	//reScene = CCTransitionSlideInL::create(1, scene);//�Ƴ�����
	//reScene = CCTransitionJumpZoom::create(0.5, scene);
	reScene = CCTransitionZoomFlipAngular::create(1, scene);//ͬ�ϣ��нǶȴ����ŵķ�ת
	Serve *layer = Serve::create();
	scene->addChild(layer);
	CCDirector::sharedDirector()->replaceScene(reScene);
	//switchScene(Serve);
}
