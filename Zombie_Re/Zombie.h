#pragma once

class Game;

class Zombie {

public:
	Zombie();
	~Zombie();

private:
	static Zombie* _instance;

public:
	static Zombie* GetInstance();

private:
	int powerZom;

public:
	void ZombieAttack();
	void NewZombie();
	int GetPowerZom();

};