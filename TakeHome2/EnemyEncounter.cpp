#include "EnemyEncounter.h"

EnemyEncounter::EnemyEncounter(list<int> enemys) {
	for (int type : enemys) {
		if (type == goblin) {
			Goblin* g = new Goblin();
			enemyList.push_back(g);
		}
	}
}

list<GameCharacter*> EnemyEncounter::getEnemyList() {
	return this->enemyList;
}
