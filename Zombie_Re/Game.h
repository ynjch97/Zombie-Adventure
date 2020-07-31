#pragma once

class Game {
public:
	Game();
	~Game();

private:
	static Game* _instance;
	int _power;
	int _powerZom;

public:
	static Game* GetInstance();

private:
	int _inputInt;
	char _inputChar;

public:
	void StartGame();
};