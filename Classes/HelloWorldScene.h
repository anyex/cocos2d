#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__
#include "Player.h"
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "MonstManage.h"

USING_NS_CC;
using namespace cocos2d::ui;

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
	Sprite* m_player;//��Ϸ��ɫ
	Sprite* m_bgSpritel,*m_bgSprite2;//��Ϸ����
	Button* jump;
	Player* m_Player = new Player();
	Text * m_score;
	LoadingBar* hp;
	int int_score = 0;

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
	virtual void update(float delta);
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
