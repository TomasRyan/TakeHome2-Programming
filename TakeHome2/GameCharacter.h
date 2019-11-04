#ifndef GameCharacter_HEADER
#define GameCharacter_HEADER
#include <iostream>
#include <time.h>
#include "Role.h";
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
	
	role m_typeID = blank;
	int m_health = 0;
	int m_speed = 0; 
	//--------------------------------
	// new stuff
	int m_attack = 0;
	int m_defense = 0;
	int m_magicpower = 0;
	int m_luck = 0;
	int m_skillPoints = 0; // currency to be spent on moves
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
	void stats() const;
	//return true if its  health is greater than 0
	bool isAlive();
	// sets GameCharacter's m_health value to 0, called when the charecter is to be removed after dieing 
	void killOff();
	// randomises the position of GameCharacter
	void RandomPos();
	// returns the numuracal position (int) of the GameCharacter within the 144 possible spaces
	//int getPos();
	// returns the m_typesID string when called
	role getRole();

	void takeDamage(int damage);

	virtual void action();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void attack(GameCharacter target);
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special1(GameCharacter target);
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special2(GameCharacter target);
	
};
#endif