#pragma once
#include "GameCharacter.h";
class Fighter : public GameCharacter {
private:

public:
	Fighter();
	virtual void action();
	void attack(GameCharacter target);
	virtual void Special1(GameCharacter target);
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special2(GameCharacter target);
};