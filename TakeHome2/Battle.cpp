#include "Battle.h";
#include "Fighter.h"
#include "Goblin.h"
Battle::Battle() {
	Fighter* f = new Fighter();
	vpGameCharacters.push_back(f);
	Goblin* g = new Goblin();
	vpGameCharacters.push_back(f);

	/*for (GameCharacter* g : vpGameCharacters) {
		if (&g.getName == "Fighter") {
			list<GameCharacter*>::iterator it = battleGrid[8][5].begin();
			battleGrid[8][5].insert(it, g);
		}
		else if (&g.getName == "Goblin") {
			list<GameCharacter*>::iterator it = battleGrid[7][5].begin();
			battleGrid[7][5].insert(it, g);
		}
	}*/
}

void Battle::printBattle() {
	int i = 0;
	for (GameCharacter* g : battleGrid[0][0]) {
		cout << i << endl; 
		i++;
	}
}