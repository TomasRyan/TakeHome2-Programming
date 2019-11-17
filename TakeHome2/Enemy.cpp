#include "Enemy.h"

EnemyEncounter::EnemyEncounter(list<int> enemys) {
	for (int type : enemys) {

	}
}

list<GameCharacter*> EnemyEncounter::getEnemyList() {
	return this->enemyList;
}
