#include "GameCharacter.h";
#include "Fighter.h"
#include "Goblin.h"
#include "InputHandler.h";
#include <list>;

class Battle {
private:
	list<GameCharacter*> vpGameCharacters;
	list<GameCharacter*> vpEnemys;
	list<GameCharacter*> battleGrid[8][8];
	list<string> battleReview;
	InputHandler i;
public:
	Battle();
	// one round of battle, so player input, action, and result
	void roundOfBattle();
	// check health to see whos dead
	void healthCheck();
	// print the battle scene
	void printBattle();
	// print all the actions of battle, which will be stored within battleReview
	void printBattleReview();
};