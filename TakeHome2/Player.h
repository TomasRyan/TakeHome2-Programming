#include "GameCharacter.h";
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Player.h
//--------------------------------------------
class Player : public GameCharacter {
private:

public:
	Player() {
		string name = "P"; // player name
		int health = 170; // health for combat
		int speed = rand() % 3 + 1; // speed being equal to a random value
		srand(rand());
		int x = rand() % 12 + 1; // x starting at a random position
		srand(rand());
		int y = rand() % 12 + 1; // y starting at a random position
		this->spawn(name, health, speed, x, y); // set values in spawn, which is a set method for GameCharecter objects
	}

	// Player input and movement logic
	virtual void update();
};