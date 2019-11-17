#pragma once
#include "GameCharacter.h";
class Fighter : public GameCharacter {
private:
	int attackRate = 1;
public:
	Fighter(string name, int h, int s, int a, int d, int l);
	Fighter(int x, int y);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
	virtual void Special1();
	virtual void stats() const;
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};