#include "Battle.h";
Battle::Battle() {
	Fighter* f = new Fighter();
	vpGameCharacters.push_back(f);
	Goblin* g = new Goblin();
	vpGameCharacters.push_back(g);
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			GameCharacter* r = new GameCharacter();
			battleGrid[x][y].insert(it, r);
		}
	}
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() == fighter) {
			cout << "Fighter insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[7][5].begin();
			battleGrid[7][5].insert(it, g);
		}
		else if (g->getRole() == goblin) {
			cout << "Enemy insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[4][5].begin();
			battleGrid[4][5].insert(it, g);
		}
		cout << "Did a round" << endl;
	}
}

void Battle::printBattle() {
	
	
	/*for (GameCharacter* g : battleGrid[4][5]) {
		g->stats();
	}*/
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			cout << x << ", " << y << endl;
			if ((*it)->getRole() != blank) {
				(*it)->stats();
			}
		}
	}
}