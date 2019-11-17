#pragma once
#pragma once
#include "GameCharacter.h";
class GunSlinger : public GameCharacter {
private:
	bool bulletDanceReady = false;
public:
	GunSlinger(string name, int h, int s, int a, int d, int l);
	GunSlinger(int x, int y);
	void move(list<GameCharacter*> battleGrid);
	void attack(GameCharacter* target);
	virtual void Special1();
	virtual void stats() const;

	// virtual, so no definition within GameCharacter, check player and enemy for definition
};