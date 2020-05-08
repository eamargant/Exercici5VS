#pragma once
#include "BaseEnemy1.h"
#include "BasePlayer1.h"

class EnrageEnemy1 : BaseEnemy1
{
public:

	EnrageEnemy1();
	EnrageEnemy1(float custom_life, float custom_attack);
	~EnrageEnemy1();

	void TakeDamage(float damage) override;
	float getLife();
	float getAttack();
	void ReciveHealth(float health);
	bool combat(BasePlayer1* punter, BasePlayer1 player, EnrageEnemy1 punterE);
	bool critic();
	
};

