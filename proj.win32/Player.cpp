#include "Player.h"
#include "FlowWord.h"
void Player::Jump() {
	if (m_isJumping)
	{
		return;
	}
	m_isJumping = true;
	auto jump = JumpBy::create(2.0f, Point(0,0),250,1);

	auto callFunc = CallFunc::create([&]() {
		m_isJumping = false;
	
	});

	auto jumpAction = Sequence::create(jump, callFunc, NULL);

	this->player->runAction(jumpAction);
}

Player::Player()
{
	m_HP = 1000;
}
void Player::hit()
{
	m_HP -= 15;
	if (m_HP<=0)
	{
		m_HP = 0;
	}

	
	


	auto backMove = MoveBy::create(0.1f, Point(-20,0));
	auto forwordMove = MoveBy::create(0.1f, Point(20,0));
	auto backRotate = RotateBy::create(0.1f, -5, 0);
	auto forwardRotate = RotateBy::create(0.1f, 5, 0);

	auto backActions = Spawn::create(backMove, backRotate, NULL);
	auto forwordActions = Spawn::create(forwordMove, forwardRotate, NULL);

	auto actions = Sequence::create(backActions, forwordActions, NULL);

	stopAllActions();
	this->player->runAction(actions);
	
}
int Player::getHP()
{
	return m_HP;
}