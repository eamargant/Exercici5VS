#include "EnrageEnemy1.h"
#include "BasePlayer1.h"
#include <iostream>
using namespace std;

EnrageEnemy1::EnrageEnemy1() {
	BaseEnemy1::BaseEnemy1();
}

EnrageEnemy1::EnrageEnemy1(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}

EnrageEnemy1::~EnrageEnemy1() {
	BaseEnemy1::~BaseEnemy1();
}
float EnrageEnemy1::getLife() {
	return BaseEnemy1::getLife();

}
void EnrageEnemy1::TakeDamage(float damage) {
	BaseEnemy1::TakeDamage(damage);

	if (life < 5.0f) {
		attack *= 2.0f;
	}
}
float EnrageEnemy1::getAttack() {
	return attack;

}
void EnrageEnemy1::ReciveHealth(float health) {
	life += health;
}
bool EnrageEnemy1::combat(BasePlayer1* punter, BasePlayer1 player, EnrageEnemy1 punterE) {
	int opcio = 0;
	bool critic = false;
	bool run = false;
	while (player.getLife() > 1 && punterE.getLife() > 0) {
		cout << "Vida del restant del player: " << player.getLife() << endl;
		cout << "Vida del restant enemy: " << punterE.getLife() << endl;
		cout << "Que vols fer, Atcar-lo o escapar-te? Atacar=1 / Escapar =2 " << endl;
		cin >> opcio;
		if (opcio == 1) {
			critic = punterE.critic();
			if (critic) {
				cout << "Et disposes a atacar i li fas dany critic amb la torxa" << endl;
				cout << "L'has incinerat!" << endl;
				punterE.TakeDamage(punterE.getLife());
				cout << "Vida del restant del player: " << player.getLife() << endl;
				cout << "Vida del restant enemy: " << punterE.getLife() << endl;
				cout << "Has sortit victorios de la lluita contra l'indigena" << endl;
				return true;
			}
			else {
				cout << "Et disposes a atacar i li dons un cate" << endl;
				punterE.TakeDamage(3.0f);
				cout << "........." << endl;
				cout << "........." << endl;
				cout << "Ell t'ataca tambe i et treu " << punterE.getAttack() << " de HP" << endl;
				player.ReciveDamage(punterE.getAttack());
				player.ApplyDamage(punter ,2.0f);

			}

		}
		else {
			run = player.run();
			if (run==true) {
				cout << "Has pogut escapar amb exit " << endl;
				return true;
			}
			else {
				cout << "No has pogut escapar. " << endl;
				cout << "L'indigena t'ataca. " << endl;
				player.ReciveDamage(punterE.getAttack()); 
				player.ApplyDamage(punter, 2.0f);
			}
		}


	}
	if (player.getLife() <= 0) {
		cout << "Pues t'han partit la cara" << endl;
		cout << "---------------------THE END-------------------------" << endl;

		return false;
	}
	else {
		cout << "Has sortit victorios de la lluita contra l'indigena" << endl;
		return true;
	}
}

bool EnrageEnemy1::critic() {
	int v1 = rand() % 10;

	if (v1 < 3) {
		return false;
	}
	else {
		return true;
	}
}
	

