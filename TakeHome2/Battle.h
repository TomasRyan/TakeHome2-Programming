#include "GameCharacter.h";
#include "Fighter.h"
#include "Goblin.h"
#include "InputHandler.h";
#include "Dijkstra's Algorithm.h"
#include "Party.h"
#include <list>;
#include "EnemyEncounter.h"

class Battle {
private:
	list<GameCharacter*> vpGameCharacters;
	list<GameCharacter*> vpEnemys;
	list<GameCharacter*> battleGrid[8][8];
	//list<Node*> battleGrid[8][8];
	list<string> battleReview;
	InputHandler i;
	Random r = Random();
public:
	Battle(Party p, EnemyEncounter e);
	// one round of battle, so player input, action, and result
	void battleLoop();
	// check health to see whos dead
	void healthCheck();
	// print the battle scene
	void printBattle();
	// print all the actions of battle, which will be stored within battleReview
	void printBattleReview();
	// update battleList()
	void updateBattleBoard();

	void removeDead();
	bool overCheck();
};