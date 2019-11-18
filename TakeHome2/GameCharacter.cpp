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
GameCharacter::GameCharacter()
{
}
// compares this object of gameCHarecter to one passed in, so that health values can be compared to return a bool
bool GameCharacter::compareHealth(const GameCharacter& a) const { 
	if (this->m_maxHealth >= a.m_maxHealth) {
		return true;
	}
	else {
		return false;
	}
}
// set method for GameCharecter
void GameCharacter::spawn(role typeID, int health, int speed) { // create an object
	this->m_typeID = typeID;
	this->m_maxHealth = health;
	this->m_speed = speed;
}
// print to the screen the typeID, used to draw its position within the gameScreen
void GameCharacter::render() { 
	cout << " " << this->m_typeID << " ";
}
// print all stats relating to the object
void GameCharacter::stats() const { 
	/*cout << "Type: " << this->m_typeID << endl;
	cout << "Remaining Health: " << this->m_health << endl;
	cout << "Speed: " << abs(this->m_speed) << endl;*/
}
//return true if its  health is greater than 0
bool GameCharacter::isAlive() {
	if (this->m_currHealth > 0) {
		return true;
	}
	else {
		return false;
	}
}
// sets GameCharacter's m_health value to 0, called when the charecter is to be removed after dieing 
void GameCharacter::killOff() {
	this->m_currHealth = 0;
}
// randomises the position of GameCharacter
void GameCharacter::RandomPos() {
	/*srand(rand());
	this->m_x = rand() % 13 + 0;
	srand(rand());
	this->m_y = rand() % 13 + 0;*/
}
// returns the m_typesID enum when called
int GameCharacter::getRole() {
	return this->m_typeID;
}
int GameCharacter::getXpos() {
	return this->m_xPos;
}

int GameCharacter::getYpos() {
	return this->m_yPos;
}

void GameCharacter::changePos(int x, int y) {
	m_xPos += x;
	m_yPos += y;
}

void GameCharacter::takeDamage(int damage) {
	this->m_currHealth -= damage;
	if (this->m_currHealth <= 0) {
		this->m_currHealth = 0;
	}
}
void GameCharacter::move(list<GameCharacter*> battleGrid) {

}
void GameCharacter::attack(GameCharacter* target) {

}
void GameCharacter::Special1() {

}

int GameCharacter::getDistance(GameCharacter target) {
	/*cout << "X diff: " << target.getXpos() - this->getXpos() << endl;
	cout << "Y diff: " << target.getYpos() - this->getYpos() << endl;*/
	return sqrt(pow(target.getXpos() - this->getXpos(), 2) +
		pow(target.getYpos() - this->getYpos(), 2) * 1.0);
	//return (this->getYpos() - target.getYpos())/(this->getXpos() - target.getXpos());
}

void GameCharacter::SetPos(int x, int y) {
	this->m_xPos = x;
	this->m_yPos = y;
}


