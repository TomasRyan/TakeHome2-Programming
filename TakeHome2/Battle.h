#include "GameCharacter.h";
#include <list>;

class GameCharacter {
private:
	list<GameCharacter*> vpGameCharacters;
	list<GameCharacter*> battleGrid[8][8] = {};
	list<string> battleReview;
public:
	// one round of battle, so player input, action, and result
	void roundOfBattle();
	// check health to see whos dead
	void healthCheck();
	// print the battle scene
	void printBattle();
	// print all the actions of battle, which will be stored within battleReview
	void printBattleReview();
};