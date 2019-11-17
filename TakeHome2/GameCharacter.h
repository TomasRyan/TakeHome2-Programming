#ifndef GameCharacter_HEADER
#define GameCharacter_HEADER
#include <iostream>
#include <time.h>
#include "Enums.h"
#include "Random.h"
#include <list>
using namespace std;
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	GameCharacter.h
//--------------------------------------------

class GameCharacter {

protected: // protected so that classed that inheret from here cn access them
	
	int m_typeID = blank;
	int m_maxHealth = 0;
	int m_currHealth = 0;
	int m_speed = 3; 
	//--------------------------------
	// new stuff
	string m_name;
	// the attack stat for rolling
	int m_attack = 0;
	// base defense stat
	int m_defense = 0;
	// stat for luck and crits
	int m_luck = 0;
	// positions on teh battlemap
	int m_xPos = 0;
	int m_yPos = 0;
	// the amount of strikes allowed per attack
	int attackCount = 1;
	// teh range of the units attack
	int attackRange = 1;
	//// bool indicating if the unit is ranged or melee
	//bool isMelee;
	bool m_defenseBuff = false;

	//Random generater = Random();
public:
	
// this default constructer should NEVER be used (used for empty spaces
	GameCharacter();
	
	// compares this object of gameCHarecter to one passed in, so that health values can be compared to return a bool
	bool compareHealth(const GameCharacter& a) const;
	// print to the screen the typeID, used to draw its position within the gameScreen
	void spawn(role typeID, int health, int speed);
	// print all stats relating to the object
	void render();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void update();
	// print all stats relating to the object
	virtual void stats() const;
	//return true if its  health is greater than 0
	bool isAlive();
	// sets GameCharacter's m_health value to 0, called when the charecter is to be removed after dieing 
	void killOff();
	// randomises the position of GameCharacter
	void RandomPos();
	// returns the numuracal position (int) of the GameCharacter within the 144 possible spaces
	//int getPos();
	// returns the m_typesID string when called
	int getRole();

	int getXpos();

	int getYpos();

	void changePos(int x, int y);
	// take damage depending on the int taken
	void takeDamage(int damage);

	virtual void move(list<GameCharacter*> battleGrid);
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void attack(GameCharacter* target);
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special1();
	int getDistance(GameCharacter target);

	void SetPos(int x, int y);

	bool PositionCheck(GameCharacter* other) {
		if (this->m_xPos == other->getXpos() && this->m_yPos == other->getYpos()) {
			return true;
		}
		return false;
	}
};
#endif