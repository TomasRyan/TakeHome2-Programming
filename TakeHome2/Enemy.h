#pragma once
#include <list>
#include "GameCharacter.h";
#include "Goblin.h"
class EnemyEncounter {
private:
	list<GameCharacter*> enemyList;
	Random generater = Random();
	string encounterName;
public:
	EnemyEncounter(list<int> enemys);
	list<GameCharacter*> getEnemyList();
};