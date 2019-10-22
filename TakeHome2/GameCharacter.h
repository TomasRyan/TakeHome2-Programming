#ifndef GameCharacter_HEADER
#define GameCharacter_HEADER
#include <iostream>
#include <time.h>
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
	std::string m_typeID;
	int m_health;
	int m_speed; // value between 1 and 3
	int m_x;
	int m_y;
	//--------------------------------
	// new stuff
	int m_attack;
	int m_defense;
	int m_magicpower;
	int m_luck;
	int m_skillPoints; // currency to be spent on moves
public:
// this default constructer should NEVER be used
	GameCharacter() {
		this->m_typeID = "error";
		this->m_health = 0;
		this->m_speed = 0;
		this->m_x = 111;
		this->m_y = 111;
	}
	
	// for sort function with overloading the < function for comparing positions of 2 GameCHaretcters 
	bool operator<(const GameCharacter& a) const
	{
		return ((this->m_x * (this->m_y * 12)) < (a.m_x * (a.m_y * 12)));
	}
	// compares this object of gameCHarecter to one passed in, so that health values can be compared to return a bool
	bool compareHealth(const GameCharacter& a) const;
	// print to the screen the typeID, used to draw its position within the gameScreen
	void spawn(std::string typeID, int health, int speed, int x, int y);
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
	int getPos();
	// returns the m_typesID string when called
	string getName() const;
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void attack();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special1();
	// virtual, so no definition within GameCharacter, check player and enemy for definition
	virtual void Special2();
};
#endif