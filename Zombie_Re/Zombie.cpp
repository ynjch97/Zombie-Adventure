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
		printf("���� ��ġ�����ϴ�. \n");
		printf("������ ��𼱰� �� �ٸ� �Ҹ��� �鸳�ϴ�. \n");
		powerZom = 100;
		break;
	case 10:
		printf("���� : �ٿ���... \n");
	default:
		break;
	}
}

int Zombie::GetPowerZom() {
	return powerZom;
}