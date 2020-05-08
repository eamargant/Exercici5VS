#pragma once
class BaseEnemy1
{
protected:
	float life;
	float attack;

public:

	BaseEnemy1();
	BaseEnemy1(float custom_life, float custom_attack);
	~BaseEnemy1();
	virtual void TakeDamage(float damage); //Metode virtual
	float getLife();

};

