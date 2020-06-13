#include "SceneAbout.h"
#include "SceneStart.h"

bool SceneAbout::init()
{
	CCLayer::init();

	// ����һ������ͼƬ
	Util::addBackground("menu_background.png", this);

	// ����һ����ť�����½�
	CCMenuItem* item = Util::addMenuItemImageRB(IMAGE_btn_back_normal, IMAGE_btn_back_press, this);
	item->setTarget(this, menu_selector(SceneAbout::Back));
	// ���About��Ϣ
	setInfo();

	return true;
}

void SceneAbout::setInfo()
{
	CCDictionary* dict = CCDictionary::createWithContentsOfFile(CFG_about);
	CCPoint margin(150, 150);
	float space = 100;
	for (int i = 0; i < 7; ++i)
	{
		const CCString* value = dict->valueForKey(Util::format(i+1, "people"));
		CCLabelTTF* label = CCLabelTTF::create(value->getCString(), "Arial", 80);
		addChild(label);
		// label��ê�㣬����Ӱ��setPosition����ָ�������ֵĶ��뷽ʽ
		label->setAnchorPoint(ccp(0, 1));
		label->setPosition(ccp(0+margin.x-60, winSize.height - i*space-margin.y));
		//CCActionInterval* filpX = CCFlipX3D::create(5);
		CCActionInterval* liquid = CCLiquid::create(5, CCSize(10, 10), 4, 1);
		//CCActionInterval* shatteredTiles = CCShatteredTiles3D::create(15, CCSize(10, 10), 50, true);
		//CCActionInterval* ripple = CCRipple3D::create(5, CCSize(10, 10), CCPointMake(240, 160), 240, 4, 160);
		label->runAction(liquid);
		//CCActionInterval* filpY = CCFlipY3D::create(5);
		
		label->setColor(ccc3(255, 255, 0));
	
	}
}

void SceneAbout::Back(CCObject*)
{
	
	CCTransitionScene *reScene = NULL;
	CCScene* scene = CCScene::create();
	//reScene = CCTransitionSlideInL::create(1, scene);//�Ƴ�����
	//reScene = CCTransitionJumpZoom::create(0.5, scene);
#if 0
	reScene = CCTransitionZoomFlipAngular::create(1, scene);//ͬ�ϣ��нǶȴ����ŵķ�ת
#endif
	reScene = CCTransitionSlideInT::create(1, scene);
	SceneStart *layer = SceneStart::create();
	scene->addChild(layer);
	CCDirector::sharedDirector()->replaceScene(reScene);
	//switchScene(SceneStart);
}