#pragma once
class BasePlayer1
{

protected:
	float life;
	float cates;


public:

	BasePlayer1();
	BasePlayer1(float custom_life, float custom_cates);
	~BasePlayer1();
	void ReciveDamage(float damage);
	void ReciveHealth(float health);
	void ApplyDamage(BasePlayer1* punter, float damage);
	float getLife();
	bool run();

};
