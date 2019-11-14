#pragma once
#include "GameCharacter.h";
class Fighter : public GameCharacter {
private:

public:
	Fighter();
	void attack(list<GameCharacter*> battleGrid);
	virtual void Special1();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};