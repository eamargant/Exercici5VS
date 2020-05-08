#include "BasePlayer1.h"
#include <xutility>
#include <iostream>
using namespace std;

BasePlayer1::BasePlayer1() {
	life = 100.0f;
	cates = 1.0f;
}

BasePlayer1::BasePlayer1(float custom_life, float custom_cates) {
	life = custom_life;
	cates = custom_cates;
}
BasePlayer1::~BasePlayer1() {

}

void BasePlayer1::ReciveDamage(float damage) {
	life -= damage;
}

void BasePlayer1::ApplyDamage(BasePlayer1* punter, float damage) {
	punter->ReciveDamage(damage);
}

float BasePlayer1::getLife() {
	return life;
}

void BasePlayer1::ReciveHealth(float health) {
	life += health;
}

bool BasePlayer1::run() {
	int v1 = rand() % 10;

	if (v1 < 2) {
		return false;
		
	}
	else {
		return true;
	}
}

