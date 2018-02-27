#include "MonstManage.h"
#include "Player.h"
#include "Monster.h"

bool MonsterManager::init() {
	
	Monster* monster = NULL;

	createMonsters();
	this->scheduleUpdate();//开启update函数调用
	//schedule(schedule_selector(MonsterManager::MyUpdate),0.8f,kRepeatForever,0);//自定义调度函数每0.8s执行一次
	return true;
}

void MonsterManager::createMonsters() {
	Monster* monster = NULL;
	
	for (int i = 0; i < MAX_MONSTER_NUM; i++)
	{
		monster = Monster::create();
		monster->m_monster = Sprite::create("A.png");
		this->addChild(monster->m_monster);

		Size size = monster->m_monster->getContentSize();
		monster->setPosition(Point(size.width*0.5f,size.height*0.5f));
		monster->setContentSize(size);
		monster->reset();
		m_monsterArr.pushBack(monster);
	}



}

void MonsterManager::update(float dt)
{
	for (auto monster:m_monsterArr)
	{
		if (monster->isAlive())
		{
			monster->m_monster->setPositionX(monster->m_monster->getPositionX() - 4);
			if (monster->m_monster->getPositionX()<0)
			{
				monster->hide();
			}
		}
	 if(monster->isColldeWithPlayer(m_player))
		{
			m_player->hit();
			monster->hide();
		}
		else
		{
			monster->show();
		}
	}
}

void MonsterManager::MyUpdate(float dt)
{
	for (auto monster : m_monsterArr)
	{
		if (monster->isAlive())
		{
			monster->setPositionX(monster->getPositionX() - 4);
			if (monster->getPositionX() < 0)
			{
				monster->hide();
			}
		}
		else
		{
			monster->show();
		}
	}

}
void MonsterManager::bindPlayer(Player* player)
{
	m_player = player;

}