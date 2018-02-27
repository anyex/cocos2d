#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;
Sprite* monst;
Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    /**  you can create scene with following comment code instead of using csb file.
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
    **/
    
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
	;
	
    auto rootNode = CSLoader::createNode("MainScene.csb");
	Size visibleSize = Director::getInstance()->getVisibleSize();
    addChild(rootNode);
	m_Player->player = (Sprite*)rootNode->getChildByName("sprite");
	m_bgSpritel = (Sprite*)rootNode->getChildByName("tollgateBG_1");
	m_bgSprite2 = (Sprite*)rootNode->getChildByName("tollgateBG_2");
	jump = (Button*)rootNode->getChildByName("Jump");
	
	m_bgSpritel->setPosition(Point(visibleSize.width/2,visibleSize.height/2));
	m_bgSprite2->setPosition(Point(visibleSize.width + visibleSize.width/2, visibleSize.height / 2));
	jump->addTouchEventListener([&](Ref* sender,Widget::TouchEventType type) {
		m_Player->Jump();

	});
	
	m_score =(Text*)rootNode->getChildByName("score");
	hp = (LoadingBar*)rootNode->getChildByName("HP");
	MonsterManager* monsterMgr = MonsterManager::create();
	monsterMgr->bindPlayer(m_Player); 
	this->addChild(monsterMgr, 8);
	this->scheduleUpdate();
    return true;
}

void HelloWorld::update(float delta)
{
	int pox1 = m_bgSpritel->getPositionX();
	int pox2 = m_bgSprite2->getPositionX();


	int iSpeed = 4;

	pox1 -= iSpeed;
	pox2 -= iSpeed;

	Size mapSize = Director::getInstance()->getVisibleSize();
	
	if (pox1<=-mapSize.width/2)
	{
		pox1 = mapSize.width + mapSize.width / 2;
	}
	if (pox2<=-mapSize.width/2)
	{
		pox2 = mapSize.width + mapSize.width / 2;
	}
	
	m_bgSpritel->setPositionX(pox1);
	m_bgSprite2->setPositionX(pox2);

	int_score += 1;
	m_score->setText(Value(int_score).asString());
	hp->setPercent(m_Player->getHP() / 1000.0f * 100);

 }