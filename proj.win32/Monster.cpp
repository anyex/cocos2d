#include "Monster.h"

Monster::Monster()
{
	m_isAlive = false;
}

void Monster::show() {
	if (m_monster!=NULL)
	{
		m_monster->setVisible(true);
		m_isAlive = true;
	}
	
}

void Monster::hide() {
	if (m_monster!=NULL)
	{
	    m_monster->setVisible(false);
			reset();
		m_isAlive = false;
	}
	

}
void Monster::reset() {
	if(m_monster!=NULL)
	m_monster->setPosition(Point(CCRANDOM_0_1()*5000+980,200+CCRANDOM_0_1()*100));
	
}

bool Monster::isAlive() {
	return m_isAlive;
}

bool Monster::init()
{
	return true;
}

bool Monster::isColldeWithPlayer(Player* player)
{
	Rect rec = player->player->getBoundingBox();
	Point monsterPos = this->m_monster->getPosition();

	return rec.containsPoint(monsterPos);//判断是否有交集

}

