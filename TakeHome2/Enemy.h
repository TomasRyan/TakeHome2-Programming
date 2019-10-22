#include "GameCharacter.h";
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Enemy.h
//--------------------------------------------
class Enemy : public GameCharacter {
private:

public:
	Enemy() {
		string name = "E"; // enemy name
		int health = 170; // health for combat
		srand(rand()); // speed being equal to a random value
		int speed = rand() % 3 + 1;
		int x = rand() % 12 + 1; // x starting at a random position
		int y = rand() % 12 + 1; // y starting at a random position
		this->spawn(name, health, speed, x, y); // set values in spawn, which is a set method for GameCharecter objects
	}
	// move the enemy object's position based on random values
	virtual void update();
};