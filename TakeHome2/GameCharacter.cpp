#include "GameCharacter.h"
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	GameCharacter.cpp
//--------------------------------------------

void GameCharacter::update() // this is never used
{
}
// compares this object of gameCHarecter to one passed in, so that health values can be compared to return a bool
bool GameCharacter::compareHealth(const GameCharacter& a) const { 
	if (this->m_health >= a.m_health) {
		return true;
	}
	else {
		return false;
	}
}
// set method for GameCharecter
void GameCharacter::spawn(std::string typeID, int health, int speed, int x, int y) { // create an object
	this->m_typeID = typeID;
	this->m_health = health;
	this->m_speed = speed;
	this->m_x = x;
	this->m_y = y;
}
// print to the screen the typeID, used to draw its position within the gameScreen
void GameCharacter::render() { 
	cout << " " << this->m_typeID << " ";
}
// print all stats relating to the object
void GameCharacter::stats() const { 
	cout << "Type: " << this->m_typeID << endl;
	cout << "Remaining Health: " << this->m_health << endl;
	cout << "Speed: " << abs(this->m_speed) << endl;
	cout << "Co-ordinates: (" << this->m_x << "," << this->m_y << ")" << endl;
	/*cout << ((this->m_x + (this->m_y * 12)) - 1) << endl;
	cout << ((this->m_y - 1) * 12) + (this->m_x) << endl;*/ // test values
}
//return true if its  health is greater than 0
bool GameCharacter::isAlive() {
	if (this->m_health > 0) {
		return true;
	}
	else {
		return false;
	}
}
// sets GameCharacter's m_health value to 0, called when the charecter is to be removed after dieing 
void GameCharacter::killOff() {
	this->m_health = 0;
}
// randomises the position of GameCharacter
void GameCharacter::RandomPos() {
	srand(rand());
	this->m_x = rand() % 13 + 0;
	srand(rand());
	this->m_y = rand() % 13 + 0;
}
// returns the numuracal position (int) of the GameCharacter within the 144 possible spaces
int GameCharacter::getPos() {
	return ((this->m_y - 1) * 12) + (this->m_x);
}
// returns the m_typesID string when called
string GameCharacter::getName() const {
	return this->m_typeID;
}
