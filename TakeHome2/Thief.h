#pragma once
#include "GameCharacter.h";
class Thief : public GameCharacter {
private:
	bool canCrit = false;
public:
	Thief(string name, int h, int s, int a, int d, int l);
	Thief(int x, int y);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
	virtual void Special1();
	bool critCheck(GameCharacter* target);
	virtual void stats() const;
	// virtual, so no definition within GameCharacter, check player and enemy for definition
};