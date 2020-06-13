#include "UserSelect.h"
#include "Common.h"
#include "SimpleAudioEngine.h"
#include "tableselect.h"



#ifdef Windows
#include <winsock2.h>  
#pragma comment(lib,"ws2_32.lib")
#endif
#ifdef LINUX
#include <stdlib.h>  
#include <string.h>  
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <netdb.h>
#endif





using namespace CocosDenshion;
bool UserSelect::init()
{
	CCLayer::init();

	// 设置一个背景图片
	Util::addBackground("maintwo.png", this);

	CCMenuItem* back = CCMenuItemImage::create("back.png", "back1.png");
	CCMenu* menuback = CCMenu::create(back, NULL);
	menuback->setPosition(ccp(80, 1784));
	addChild(menuback);

	//CCMenuItem* chufang = CCMenuItemImage::create("chufang1.png", "chufang2.png");
	
	//menu4->setPosition(ccp(750, 1430));
	//addChild(menu4);

	CCMenuItem* find = CCMenuItemImage::create("find.png", "find.png");
	find->setPosition(ccp(960, 1784));
	addChild(find);
	//送酒水
	CCMenuItem* jiushui = CCMenuItemImage::create("jiushui1.png", "jiushui2.png");
	CCMenu* menu1 = CCMenu::create(jiushui, NULL);
	menu1->setPosition(ccp(240, 1430));
	addChild(menu1);
#if 0
	//送餐
	CCMenuItem* can = CCMenuItemImage::create("songcan1.png", "songcan2.png");
	CCMenu* menu2 = CCMenu::create(can, NULL);
	menu2->setPosition(ccp(410, 930));
	addChild(menu2);
#endif
	//送餐
	CCMenuItem* can = CCMenuItemImage::create("songcan1.png", "songcan2.png");
	CCMenu* menu2 = CCMenu::create(can, NULL);
	menu2->setPosition(ccp(540, 895));
	addChild(menu2);
	//充电
	CCMenuItem* chongdian = CCMenuItemImage::create("chongdian1.png", "chongdian2.png");
	CCMenu* menu3 = CCMenu::create(chongdian, NULL);
	menu3->setPosition(ccp(539, 380));
	addChild(menu3);
	//厨房
	CCMenuItem* chufang = CCMenuItemImage::create("chufang1.png", "chufang2.png");
	CCMenu* menu4 = CCMenu::create(chufang, NULL);
	menu4->setPosition(ccp(750, 1430));
	addChild(menu4);
	//菜单
#if 0
	CCMenuItem* cadan = CCMenuItemImage::create("menu.png", "menu1.png");
	CCMenu* menu5 = CCMenu::create(cadan, NULL);
	menu5->setPosition(ccp(915, 930));
	addChild(menu5);
#endif
	/*
	// 加三个菜单按钮
	CCMenuItem* start = CCMenuItemImage::create("chufang.png", "chufang1.png");
	//start->setPosition(ccp(40, 1024));
	CCMenuItem* about = CCMenuItemImage::create("bigcanzhuo.png", "bigcanzhuo1.png");
	CCMenuItem* about1 = CCMenuItemImage::create("bigcanzhuo.png", "bigcanzhuo1.png");
	CCMenuItem* ligth = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	CCMenuItem* ligth1 = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	CCMenuItem* ligth2 = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	CCMenuItem* ligth3 = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	CCMenuItem* ligth4 = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	CCMenuItem* ligth5 = CCMenuItemImage::create("canzhuo.png", "canzhuo1.png");
	//*充电
	CCMenuItem* chogdian = CCMenuItemImage::create("chongdian.png", "chongdian1.png");
	CCMenuItem* water = CCMenuItemImage::create("jiushui.png", "jiushui1.png");
	CCMenu* menu1 = CCMenu::create(start, NULL);
	CCMenu* menu2 = CCMenu::create(about, NULL);
	CCMenu* menu3 = CCMenu::create(about1, NULL);
	CCMenu* menu4 = CCMenu::create(ligth, NULL);
	CCMenu* menu5 = CCMenu::create(ligth1, NULL);
	CCMenu* menu6 = CCMenu::create(ligth2, NULL);
	CCMenu* menu7 = CCMenu::create(ligth3, NULL);
	CCMenu* menu = CCMenu::create(chogdian, NULL);
	CCMenu* menu8 = CCMenu::create(water, NULL);
	CCMenu* menu9 = CCMenu::create(ligth4, NULL);
	CCMenu* menu10 = CCMenu::create(ligth5, NULL);

	menu->setPosition(ccp(630,900));
	menu1->setPosition(ccp(270, 1100));
	//*大桌子位置*
	menu2->setPosition(ccp(590,750));
	menu3->setPosition(ccp(590, 500));
	//*小桌子位置*
	menu4->setPosition(ccp(270,800));
	menu5->setPosition(ccp(270, 700));
	menu6->setPosition(ccp(400, 800));
	menu7->setPosition(ccp(400, 700));
	menu9->setPosition(ccp(270, 600));
	menu10->setPosition(ccp(400, 600));
	//*吧台*
	menu8->setPosition(ccp(107,690));
	
	addChild(menu);
	addChild(menu1);
	addChild(menu2);
	addChild(menu3);
	addChild(menu4);
	addChild(menu5);
	addChild(menu6);
	addChild(menu7);
	addChild(menu8);
	addChild(menu9);
	addChild(menu10);
	
	// 自定义空格的对其
	//menu->alignItemsVerticallyWithPadding(50);
	//SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	// 三个按钮增加回调函数
	start->setTarget(this, menu_selector(UserSelect::c));//接菜
	about->setTarget(this, menu_selector(UserSelect::b1));//桌子位置
	about1->setTarget(this, menu_selector(UserSelect::b2));//桌子位置
	ligth->setTarget(this, menu_selector(UserSelect::t1));
	ligth1->setTarget(this, menu_selector(UserSelect::t3));
	ligth2->setTarget(this, menu_selector(UserSelect::t2));
	ligth3->setTarget(this, menu_selector(UserSelect::t4));
	ligth4->setTarget(this, menu_selector(UserSelect::t5));
	ligth5->setTarget(this, menu_selector(UserSelect::t6));
	chogdian->setTarget(this, menu_selector(UserSelect::l1));//充电
	water->setTarget(this, menu_selector(UserSelect::w));//充电
	*/
	back->setTarget(this, menu_selector(UserSelect::BackStart));
	jiushui->setTarget(this, menu_selector(UserSelect::togetwater));//
	can->setTarget(this, menu_selector(UserSelect::songcan));
	chufang ->setTarget(this, menu_selector(UserSelect::tochiken));
	chongdian->setTarget(this, menu_selector(UserSelect::waitocharge));
	return true;
}

void UserSelect::Start(CCObject*)
{
	CCLog("Start");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
} 

void UserSelect::About(CCObject*)
{
	CCLog("About");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::Quit(CCObject*)
{
	
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	exit(1);
}

void UserSelect::Ligth(CCObject* sender)
{
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::SceneChange(CCLayer* Layer)
{
	CCTransitionScene *reScene = NULL;
	CCScene* scene = CCScene::create();
	//reScene = CCTransitionSlideInL::create(1, scene);//推出覆盖
	//reScene = CCTransitionJumpZoom::create(0.5, scene);
	reScene = CCTransitionZoomFlipAngular::create(1, scene);//同上，有角度带缩放的翻转
	//Layer *layer = Layer::create();
	scene->addChild(Layer);
	CCDirector::sharedDirector()->replaceScene(reScene);
}

void UserSelect::t1(CCObject*)
{
	sent("t1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::t2(CCObject*)
{
	sent("t2");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::t3(CCObject*)
{
	sent("t3");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::t4(CCObject*)
{
	sent("t4");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::t5(CCObject*)
{
	sent("t5");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::t6(CCObject*)
{
	sent("t6");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::b1(CCObject*)
{
	sent("b1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void UserSelect::b2(CCObject*)
{
	sent("b2");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::l1(CCObject*)
{
	sent("l1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::c(CCObject*)
{
	sent("c");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::w(CCObject*)
{
	sent("w");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

int UserSelect::sent(char * str)
{
	
#ifdef Windows
	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA wsaData;
	if (WSAStartup(sockVersion, &wsaData) != 0)
	{
		return 0;
	}

	int socket_descriptor; //套接口描述字
	int iter = 0;
	//char buf[80];
	struct sockaddr_in address;//处理网络通信的地址

	//bzero(&address, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr(IPadrr);//这里不一样
	address.sin_port = htons(10002);

	//创建一个 UDP socket

	socket_descriptor = socket(AF_INET, SOCK_DGRAM, 0);//IPV4  SOCK_DGRAM 数据报套接字（UDP协议）

	sendto(socket_descriptor, str, sizeof(str), 0, (struct sockaddr *)&address, sizeof(address));
#endif
#ifdef LINUX
	int socket_descriptor; //套接口描述字  
	int iter = 0;
	//char buf[80];
	struct sockaddr_in address;//处理网络通信的地址  

	bzero(&address, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr(IPadrr);//这里不一样  
	address.sin_port = htons(10002);

	//创建一个 UDP socket  

	socket_descriptor = socket(AF_INET, SOCK_DGRAM, 0);//IPV4  SOCK_DGRAM 数据报套接字（UDP协议）  


	/*s：一个标识套接口的描述字。　
	buf：包含待发送数据的缓冲区。　　
	len：buf缓冲区中数据的长度。　
	flags：调用方式标志位。　　
	to：（可选）指针，指向目的套接口的地址。　
	tolen：to所指地址的长度。
	*/
	sendto(socket_descriptor, str, sizeof(str), 0, (struct sockaddr *)&address, sizeof(address));
	close(socket_descriptor);
#endif
	return 0;
}

void UserSelect::songcan(CCObject* sender)
{
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	tableselect *layer = tableselect::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::tochiken(CCObject* sender)
{
	sent("c");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	ToChiken *layer = ToChiken::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void UserSelect::togetwater(CCObject* sender)
{
	sent("w");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	ToGetWater *layer = ToGetWater::create();
	SceneChange(layer);
}

void UserSelect::waitocharge(CCObject* sender)
{
	sent("l1");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	BaterryCharge *layer = BaterryCharge::create();
	SceneChange(layer);
}

void UserSelect::BackStart(CCObject* sender)
{
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	CCTransitionScene *reScene = NULL;
	CCScene* scene = CCScene::create();
	reScene = CCTransitionSlideInT::create(1, scene);
	SceneStart *layer = SceneStart::create();
	//Serve *layer = Serve::create();
	scene->addChild(layer);
	CCDirector::sharedDirector()->replaceScene(reScene);
}
