#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Game.h"
#include "Zombie.h"
#include "Person.h"

Game* Game::_instance = 0;

class Zombie;
class Person;

Game::Game() {

}

Game::~Game() {

}

Game* Game::GetInstance()
{
	if (0 == _instance)
	{
		_instance = new Game();
	}
	return _instance;
}

void Game::StartGame() {
	_power = Person::GetInstance()->GetPower();
	_powerZom = Zombie::GetInstance()->GetPowerZom();

	printf("�ٰ����� ���� ������ Ż���ϼ���.\n");
	printf("Press 'A' to attack.\n");
	
	for (int i = 0; i < 3; i++) {
		
		printf("����� ���� ���� ������ �ٰ��Խ��ϴ�!\n");
		printf(">> My power : %d \n", _power);
		printf(">> Zombie's power : %d \n", _powerZom);

		while (0 != _powerZom) {
		
			_inputChar = getch();
			_inputInt = atoi(&_inputChar);

			if ('a' == _inputChar || 'A' == _inputChar) {
				Zombie::GetInstance()->ZombieAttack();
			}
			else {
				Person::GetInstance()->PersonAttack();
			}

			Zombie::GetInstance()->NewZombie();

		}
	}
}
