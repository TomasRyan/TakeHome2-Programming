#include "Goblin.h";
Goblin::Goblin(int x, int y, int health) {
	this->m_typeID = goblin;
	this->m_xPos = x;
	this->m_yPos = y;
	this->m_maxHealth = health;
}

void Goblin::move(list<GameCharacter*> battleGrid) {
	int moveCounter = 0;
	int attackCount = 0;
	int distanceToTarget = INT_MAX;
	GameCharacter* target = NULL;
	for (GameCharacter* gc : battleGrid) { // gets huristic distance to target
		if (gc->getRole() == fighter || gc->getRole() ==  thief|| gc->getRole() == mage) {
			if (this->getDistance(*gc) < distanceToTarget) {
				target = gc;
				distanceToTarget = this->getDistance(*gc);
			}

		}
		//cout << distanceToTarget << endl;
		//(*target).stats();
	}
	bool canAttack = false;
	int directionX = 0;
	int directionY = 0;
	//	checks where
	// x axis

	while (moveCounter < this->m_speed && canAttack == false) {
		directionX = 0;
		directionY = 0;
		if (target->getXpos() > this->getXpos()) {
			directionX = 1;
		}
		else if (target->getXpos() < this->getXpos()) {
			directionX = -1;
		}
		if (target->getYpos() > this->getYpos()) {
			directionY = 1;
		}
		else if (target->getYpos() < this->getYpos()) {
			directionY = -1;
		}
		if (distanceToTarget >= 2) {
			this->m_xPos += directionX;
			this->m_yPos += directionY;
			cout << "xPos: " << this->m_xPos << endl;
			cout << "yPos: " << this->m_yPos << endl;
			moveCounter++;
			distanceToTarget = this->getDistance(*target);
			cout << distanceToTarget << endl;
		}
		else if (distanceToTarget <= 1) {
			canAttack = true;
		}
		if (canAttack == true && moveCounter < this->m_speed) {
			this->attack(target);
			moveCounter++;
		}
	}
	if (canAttack == true && moveCounter < this->m_speed) {
		this->attack(target);
		moveCounter++;
	}
}
void Goblin::attack(GameCharacter* target) {
	target->takeDamage(this->m_attack);
}

