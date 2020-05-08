#include "BaseEnemy1.h"

BaseEnemy1::BaseEnemy1() {
	life = 100.0f;
	attack = 10;
}

BaseEnemy1::BaseEnemy1(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}
BaseEnemy1::~BaseEnemy1() {

}

void BaseEnemy1::TakeDamage(float damage) {
	life -= damage;
}

float BaseEnemy1::getLife() {
	return life;
}

