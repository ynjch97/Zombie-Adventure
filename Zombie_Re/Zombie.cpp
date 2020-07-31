#include <stdio.h>
#include "Zombie.h"

Zombie* Zombie::_instance = 0;

class Zombie;
class Person;

Zombie::Zombie() {
	powerZom = 100;
}

Zombie::~Zombie() {

}

Zombie* Zombie::GetInstance()
{
	if (0 == _instance)
	{
		_instance = new Zombie();
	}
	return _instance;
}

void Zombie::ZombieAttack() {
	powerZom = powerZom - 10;
	printf(">> Zombie's power : %d \n", powerZom);
}

void Zombie::NewZombie() {
	switch (powerZom) {
	case 0:
		printf("좀비를 해치웠습니다. \n");
		printf("하지만 어디선가 또 다른 소리가 들립니다. \n");
		powerZom = 100;
		break;
	case 10:
		printf("좀비 : 꾸에엑... \n");
	default:
		break;
	}
}

int Zombie::GetPowerZom() {
	return powerZom;
}