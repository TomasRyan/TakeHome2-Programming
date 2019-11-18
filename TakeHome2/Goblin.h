#pragma once
#include "GameCharacter.h";
class Goblin : public GameCharacter {
private:

public:
	Goblin();
	Goblin(int health);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
};