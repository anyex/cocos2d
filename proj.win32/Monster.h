#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_
#include "cocos2d.h"
#include "Player.h"
USING_NS_CC;

class Monster :public Node {
public:
	Monster();
	//~Monster();
	CREATE_FUNC(Monster);
	virtual bool init();
public:
	void show();
	void hide();
	void reset();
	bool isAlive();
	bool isColldeWithPlayer(Player* player);
	Sprite* m_monster = NULL;

private:
	bool m_isAlive;

};
#endif