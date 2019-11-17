#pragma once
#pragma once
#include "GameCharacter.h";
class Paladin : public GameCharacter {
private:
	int ArmourAddition = 2;
public:
	Paladin(string name, int h, int s, int a, int d, int l);
	Paladin(int x, int y);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
	virtual void Special1();
	virtual void stats() const;
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};