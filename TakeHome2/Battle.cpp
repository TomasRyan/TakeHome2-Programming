#include "Battle.h";

Battle::Battle(Party p) {
	/*Fighter* f = new Fighter(7, 5);
	vpGameCharacters.push_back(f);
	Goblin* g = new Goblin(0, 3, 10);
	vpGameCharacters.push_back(g);*/
	vpGameCharacters = p.getPartyList();
	for (GameCharacter* g : vpGameCharacters) {
		g->stats();
	}
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			GameCharacter* r = new GameCharacter();
			battleGrid[x][y].insert(it, r);
		}
	}
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() == fighter) {
			//cout << "Fighter insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[g->getXpos()][g->getYpos()].begin();
			battleGrid[g->getXpos()][g->getYpos()].insert(it, g);
		}
		else if (g->getRole() == goblin) {
			//cout << "Enemy insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[g->getXpos()][g->getYpos()].begin();
			battleGrid[g->getXpos()][g->getYpos()].insert(it, g);
		}
	}
}



void Battle::roundOfBattle() {
	//////////////////////////////////////////////////////////////
	// special move pick
	cout << "Who would you like to use there ability??" << endl;
	int count = 1;
	int input;
	for (GameCharacter* g : vpGameCharacters) {
		cout << count << ": " << g->getRole() << endl;
		count++;
	}
	cin >> input;
	cin.clear();
	input = i.numberChecker(input, 0, vpGameCharacters.size());
	input--;
	list<GameCharacter*>::iterator skillPick = vpGameCharacters.begin();
	// scroll iterator to selected charecter
	for(int i = 0; i < input; i++) {
		skillPick++;
	}
	(*skillPick)->Special1();
	////////////////////////////////////////////////////////////////
	// player party attacks
	for (GameCharacter* g : vpGameCharacters) {
		g->move(vpGameCharacters);
		this->updateBattleBoard();
	}
	for (GameCharacter* e : vpEnemys) {
		e->move(vpGameCharacters);
		this->updateBattleBoard();
	}
}

void Battle::printBattle() {
	
	
	/*for (GameCharacter* g : battleGrid[4][5]) {
		g->stats();
	}*/
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			cout << " " << (*it)->getRole() << " ";
			/*if ((*it)->getRole() != blank) {
				(*it)->stats();
			}*/
		}
		cout << endl;
	}
}

void Battle::updateBattleBoard() {
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {

			battleGrid[x][y].clear();
		}
	}
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			GameCharacter* r = new GameCharacter();
			battleGrid[x][y].insert(it, r);
		}
	}
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() == fighter) {
			//cout << "Fighter insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[g->getXpos()][g->getYpos()].begin();
			battleGrid[g->getXpos()][g->getYpos()].insert(it, g);
		}
		else if (g->getRole() == goblin) {
			//cout << "Enemy insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[g->getXpos()][g->getYpos()].begin();
			battleGrid[g->getXpos()][g->getYpos()].insert(it, g);
		}
	}
}




