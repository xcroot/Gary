#include "tableselect.h"
#include "Common.h"
#include "SimpleAudioEngine.h"
//#include <winsock2.h>  



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
//#pragma comment(lib,"ws2_32.lib")

bool tableselect::init()
{
	CCLayer::init();

	// 设置一个背景图片
	Util::addBackground("tableselectmain.png", this);


	//table 相隔355
	CCMenuItem* table1 = CCMenuItemImage::create("table1.png", "table.png");
	CCMenu* menu1 = CCMenu::create(table1, NULL);
	menu1->setPosition(ccp(180, 1740));
	addChild(menu1);
	CCMenuItem* table2 = CCMenuItemImage::create("table2.png", "table.png");
	CCMenu* menu2 = CCMenu::create(table2, NULL);
	menu2->setPosition(ccp(534, 1740));
	addChild(menu2);
	CCMenuItem* table3 = CCMenuItemImage::create("table3.png", "table.png");
	CCMenu* menu3 = CCMenu::create(table3, NULL);
	menu3->setPosition(ccp(890, 1740));
	addChild(menu3);

	CCMenuItem* table4 = CCMenuItemImage::create("table4.png", "table.png");
	CCMenu* menu4 = CCMenu::create(table4, NULL);
	menu4->setPosition(ccp(180, 1385));
	addChild(menu4);
	CCMenuItem* table5 = CCMenuItemImage::create("table5.png", "table.png");
	CCMenu* menu5 = CCMenu::create(table5, NULL);
	menu5->setPosition(ccp(534, 1385));
	addChild(menu5);
	CCMenuItem* table6 = CCMenuItemImage::create("table6.png", "table.png");
	CCMenu* menu6 = CCMenu::create(table6, NULL);
	menu6->setPosition(ccp(890, 1385));
	addChild(menu6);

	CCMenuItem* table7 = CCMenuItemImage::create("table7.png", "table.png");
	CCMenu* menu7 = CCMenu::create(table7, NULL);
	menu7->setPosition(ccp(180, 1030));
	addChild(menu7);
	CCMenuItem* table8 = CCMenuItemImage::create("table8.png", "table.png");
	CCMenu* menu8 = CCMenu::create(table8, NULL);
	menu8->setPosition(ccp(534, 1030));
	addChild(menu8);
	CCMenuItem* table9 = CCMenuItemImage::create("table9.png", "table.png");
	CCMenu* menu9 = CCMenu::create(table9, NULL);
	menu9->setPosition(ccp(890, 1030));
	addChild(menu9);

	CCMenuItem* table10 = CCMenuItemImage::create("table10.png", "table.png");
	CCMenu* menu10 = CCMenu::create(table10, NULL);
	menu10->setPosition(ccp(180, 675));
	addChild(menu10);
	CCMenuItem* table11 = CCMenuItemImage::create("table11.png", "table.png");
	CCMenu* menu11 = CCMenu::create(table11, NULL);
	menu11->setPosition(ccp(534, 675));
	addChild(menu11);
	CCMenuItem* table12 = CCMenuItemImage::create("table12.png", "table.png");
	CCMenu* menu12 = CCMenu::create(table12, NULL);
	menu12->setPosition(ccp(890, 675));
	addChild(menu12);
	//add

	CCMenuItem* add1 = CCMenuItemImage::create("add001.png", "add002.png");
	CCMenu* menuadd = CCMenu::create(add1, NULL);
	menuadd->setPosition(ccp(535, 420));
	addChild(menuadd);

	//tomain
	CCMenuItem* tomain = CCMenuItemImage::create("tomain.png", "table.png");
	CCMenu* menutomain = CCMenu::create(tomain, NULL);
	menutomain->setPosition(ccp(180, 140));
	addChild(menutomain);
	//start->setTarget(this, menu_selector(UserSelect::c));//接菜
	tomain->setTarget(this, menu_selector(tableselect::BackStart));//接菜
	//backselect
	CCMenuItem* backselectmenu = CCMenuItemImage::create("backmian.png", "table.png");
	CCMenu* menuselect = CCMenu::create(backselectmenu, NULL);
	menuselect->setPosition(ccp(900, 140));
	addChild(menuselect);
	backselectmenu->setTarget(this, menu_selector(tableselect::BackSlect));//接菜
	/*
	CCMenuItem* back = CCMenuItemImage::create("back.png", "back.png");
	back->setPosition(ccp(80, 1784));
	addChild(back);

	CCMenuItem* find = CCMenuItemImage::create("find.png", "find.png");
	find->setPosition(ccp(960, 1784));
	addChild(find);
	//送酒水
	CCMenuItem* jiushui = CCMenuItemImage::create("jiushui1.png", "jiushui2.png");
	CCMenu* menu1 = CCMenu::create(jiushui, NULL);
	menu1->setPosition(ccp(240, 1430));
	addChild(menu1);
	//送餐
	CCMenuItem* can = CCMenuItemImage::create("songcan1.png", "songcan2.png");
	CCMenu* menu2 = CCMenu::create(can, NULL);
	menu2->setPosition(ccp(410, 930));
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
	CCMenuItem* cadan = CCMenuItemImage::create("menu.png", "menu1.png");
	CCMenu* menu5 = CCMenu::create(cadan, NULL);
	menu5->setPosition(ccp(915, 930));
	addChild(menu5);
	*/
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
    table1->setTarget(this, menu_selector(tableselect::t1));
	table2->setTarget(this, menu_selector(tableselect::t2));
	table3->setTarget(this, menu_selector(tableselect::t3));
	table4->setTarget(this, menu_selector(tableselect::t4));
	table5->setTarget(this, menu_selector(tableselect::t5));
	table6->setTarget(this, menu_selector(tableselect::t6));
	table7->setTarget(this, menu_selector(tableselect::t7));
	table8->setTarget(this, menu_selector(tableselect::t8));
	table9->setTarget(this, menu_selector(tableselect::t9));
	table10->setTarget(this, menu_selector(tableselect::t10));
	table11->setTarget(this, menu_selector(tableselect::t11));
	table12->setTarget(this, menu_selector(tableselect::t12));
	return true;
}

void tableselect::Start(CCObject*)
{
	CCLog("Start");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::About(CCObject*)
{
	CCLog("About");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::Quit(CCObject*)
{

	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	exit(1);
}

void tableselect::Ligth(CCObject* sender)
{
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::SceneChange(CCLayer* Layer)
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

void tableselect::t1(CCObject*)
{
	sent("t1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::t2(CCObject*)
{
	sent("t2");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::t3(CCObject*)
{
	sent("t3");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::t4(CCObject*)
{
	sent("t4");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::t5(CCObject*)
{
	sent("t5");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::t6(CCObject*)
{
	sent("t6");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::b1(CCObject*)
{
	sent("b1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}
void tableselect::b2(CCObject*)
{
	sent("b2");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::l1(CCObject*)
{
	sent("l1");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::c(CCObject*)
{
	sent("c");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

void tableselect::w(CCObject*)
{
	sent("w");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
	//switchScene(Serve);
}

int tableselect::sent(char * str)
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

void tableselect::BackStart(CCObject* sender)
{
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	SceneStart *layer = SceneStart::create();
	SceneChange(layer);
}

void tableselect::BackSlect(CCObject* sender)
{
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	UserSelect *layer = UserSelect::create();
	SceneChange(layer);
}

void tableselect::t7(CCObject*)
{
	sent("t7");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}

void tableselect::t8(CCObject*)
{
	sent("t8");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}

void tableselect::t9(CCObject*)
{
	sent("t9");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}

void tableselect::t10(CCObject*)
{
	sent("t10");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}

void tableselect::t11(CCObject*)
{
	sent("t11");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}

void tableselect::t12(CCObject*)
{
	sent("t12");
	CCLog("Ligth");
	SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
	Serve *layer = Serve::create();
	SceneChange(layer);
}
