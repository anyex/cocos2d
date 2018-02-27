#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "cocos2d.h"
#include "ui/CocosGUI.h"
USING_NS_CC;
using namespace cocos2d::ui;

class Player :public Node {
public:
	Sprite* player;
	void Jump();
	void hit();
	int getHP();
	Player();
private:
	bool m_isJumping = false;
	int m_HP;
};

#endif