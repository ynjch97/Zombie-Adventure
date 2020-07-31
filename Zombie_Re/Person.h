#pragma once

class Game;

class Person {

public:
	Person();
	~Person();

private:
	static Person* _instance;

public:
	static Person* GetInstance();

private:
	int power;

public:
	void PersonAttack();
	int GetPower();

};