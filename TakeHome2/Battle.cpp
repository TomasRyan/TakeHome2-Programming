#include "Battle.h";

Battle::Battle(Party p, EnemyEncounter e) {
	/*Fighter* f = new Fighter(7, 5);
	vpGameCharacters.push_back(f);
	Goblin* g = new Goblin(0, 3, 10);
	vpGameCharacters.push_back(g);*/
	vpGameCharacters = p.getPartyList();
	for (GameCharacter* g : vpGameCharacters) {
		g->stats();
	}
	vpEnemys = e.getEnemyList();

	for (GameCharacter* e : vpEnemys) {
		vpGameCharacters.push_back(e);
	}
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			GameCharacter* r = new GameCharacter();
			battleGrid[x][y].insert(it, r);
		}
	}
	//-------------------------------------
	// set position
	//=====================================
	int playerX = 5;
	int playerY = 7;
	int enemyXLow = 0;
	int enemyXHigh = 7;
	int enemyYLow = 0;
	int enemyYHigh = 2;
	int enemyX;
	int enemyY;
	enemyX = r.getRandom(enemyXLow, enemyXHigh);
	enemyY = r.getRandom(enemyYLow, enemyYHigh);
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() == fighter || g->getRole() == thief || 
			g->getRole() == mage || g->getRole() == gunslinger ||
			g->getRole() == paladin || g->getRole() == cleric) {
			g->SetPos(playerX, playerY);
			playerX--;
		}
		else if (g->getRole() == goblin) {
			g->SetPos(enemyX, enemyY);
		}
		enemyX = r.getRandom(enemyXLow, enemyXHigh);
		enemyY = r.getRandom(enemyYLow, enemyYHigh);
	}
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() != blank) {
			//cout << "Fighter insert" << endl;
			list<GameCharacter*>::iterator it = battleGrid[g->getXpos()][g->getYpos()].begin();
			battleGrid[g->getXpos()][g->getYpos()].insert(it, g);
		}
	}
}



void Battle::battleLoop() {
	while (overCheck() == false) {
		//////////////////////////////////////////////////////////////
		// special move pick
		cout << "Who would you like to use there ability??" << endl;
		int count = 1;
		int input;
		for (GameCharacter* g : vpGameCharacters) {
			if (g->getRole() == fighter || g->getRole() == thief ||
				g->getRole() == mage || g->getRole() == gunslinger ||
				g->getRole() == paladin || g->getRole() == cleric) {
				cout << count << ": " << g->getRole() << endl;
			}
			count++;
		}
		cin >> input;
		cin.clear();
		input = i.numberChecker(input, 0, 4);
		input--;
		list<GameCharacter*>::iterator skillPick = vpGameCharacters.begin();
		// scroll iterator to selected charecter
		for (int i = 0; i < input; i++) {
			skillPick++;
		}
		(*skillPick)->Special1();
		////////////////////////////////////////////////////////////////
		// player party attacks
		for (GameCharacter* g : vpGameCharacters) {
			if (g->isAlive()) {
				g->move(vpGameCharacters);
				this->updateBattleBoard();
			}
				
		}
		removeDead();
		printBattle();
	}
}

void Battle::printBattle() {
	cout << "---------------------------" << endl;
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			list<GameCharacter*>::iterator it = battleGrid[x][y].begin();
			cout << " " << (*it)->getRole() << " ";
		}
		cout << endl;
	}
	cout << "---------------------------" << endl;
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
		if (g->getRole() == fighter || g->getRole() == thief ||
			g->getRole() == mage || g->getRole() == gunslinger ||
			g->getRole() == paladin || g->getRole() == cleric) {
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

void Battle::removeDead() {
	list<GameCharacter*>::iterator it = vpGameCharacters.begin();
	while (it != vpGameCharacters.end()) {
		if ((*it)->isAlive() == false) {
			it = vpGameCharacters.erase(it);
		}
		else {
			it++;
		}
	}
}

bool Battle::overCheck() {
	bool isOver = true;
	for (GameCharacter* g : vpGameCharacters) {
		if (g->getRole() == goblin) {
			isOver = false;
		}
	}
	return isOver;
}


