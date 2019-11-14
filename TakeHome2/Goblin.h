#pragma once
#include "GameCharacter.h";
class Goblin : public GameCharacter {
private:

public:
	Goblin(int x, int y);
	void attack();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special1();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};