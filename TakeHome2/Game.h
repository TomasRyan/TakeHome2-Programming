#include "GameCharacter.h";
#include "Player.h";
#include "Enemy.h";
#include <list>;
#include <vector>
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Game.h
//--------------------------------------------
class Game {
private:
	list<GameCharacter*> vpGameCharacters;
public:
	Game() {
		init();
	}
	// create the objects and assign each enemy and player unique typeID, health and x and y coords max health should be 170, speed is between 1 and 3. Place these GameCharacters in a list of GameCharacter pointers e.g. vpGameCharacters
	void init();
	// cycle through the vector of GameCharacter ( enemy and player objects) and call the render function for each object, aswell as filling in the spaces between the elements with " 0 " to help the player play decently
	void render();
	//cycle through the vector of GameCharacter (enemy and player objects) and call the update function for each object
	void update();
	// Check the vector to see if two objects occupy the same coords declare that a battle must take  place. The object with the higher health wins. The loser will have its health set to 0.
	void battle();
	// cycle through the vector of GameCharacters ( enemy and player objects) and call the stats function for each object
	void stats();
	//remove any objects from the list whose health is 0 (Hint use isAlive function)
	void clean();
	// print out all this for when a instance of battle happens, to help show the player that a battle has actually happened
	//	input: GameCharacter* and GameCharacter* to be compared against each other
	void printBattle(GameCharacter* a, GameCharacter* b);
	// print out a graphic to show who won a battle
//	input: GameCharacter*
	void printVictor(GameCharacter* a);
};