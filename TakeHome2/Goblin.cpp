#include "Goblin.h";
Goblin::Goblin(int health) {
	this->m_typeID = goblin;
	this->m_maxHealth = health;
	this->m_currHealth = health;
}

Goblin::Goblin() {
	this->m_typeID = goblin;
	this->m_maxHealth = 15;
	this->m_currHealth = 15;
	this->m_attack = 5;
	this->m_defense = 4;
	this->m_luck = 2;
	this->m_speed = 3;
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
		// if collidiing then push teh other one away1
		for (GameCharacter* check : battleGrid) {
			while (check->getXpos() == this->getXpos() && check->getYpos() == this->getYpos() && check != this) {
				this->m_xPos -= directionX;
				this->m_yPos -= directionY;
				while (this->m_xPos < 0) {
					this->m_xPos++;
				}
				while (this->m_xPos > 7) {
					this->m_xPos--;
				}
				while (this->m_yPos < 0) {
					this->m_yPos++;
				}
				while (this->m_yPos > 7) {
					this->m_yPos--;
				}
			}
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

