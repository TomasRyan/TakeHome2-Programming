#pragma once
#include "GameCharacter.h";
class Goblin : public GameCharacter {
private:

public:
	Goblin(int x, int y, int health);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
};