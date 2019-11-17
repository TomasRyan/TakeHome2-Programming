#pragma once
#pragma once
#include "GameCharacter.h";
class Cleric : public GameCharacter {
private:
	int healAmount = 5;
public:
	Cleric(string name, int h, int s, int a, int d, int l);
	Cleric(int x, int y);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
	virtual void Special1(list<GameCharacter*> battleGrid);
	virtual void stats() const;
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};