#pragma once

#ifndef _MONSTERMANAGER_H_
#define _MONSTERMANAGER_H_
#include "cocos2d.h"
#include "Monster.h"
USING_NS_CC;

#define MAX_MONSTER_NUM 10//�����������

class MonsterManager :public Node {
public:
	Player* m_player;
	void bindPlayer(Player* player);
	CREATE_FUNC(MonsterManager);
	virtual bool init();
	void MyUpdate(float dt);
	virtual void update(float dt);
private:
	void createMonsters();
private:
	Vector<Monster*> m_monsterArr;//��������б�
};

#endif
