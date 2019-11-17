#include "Paladin.h";
Paladin::Paladin(int x, int y) {
	this->m_xPos = x;
	this->m_yPos = y;
	this->m_typeID = cleric;
}
Paladin::Paladin(string name, int h, int s, int a, int d, int l) {
	this->m_name = name;
	this->m_maxHealth = h;
	this->m_currHealth = h;
	this->m_speed = s;
	this->m_attack = a;
	this->m_defense = d;
	this->m_luck = l;
	this->m_typeID = paladin;
}
void Paladin::move(list<GameCharacter*> battleGrid) {
	int moveCounter = 0;
	int attackCount = 0;
	int distanceToTarget = INT_MAX;
	GameCharacter* target = NULL;
	for (GameCharacter* gc : battleGrid) { // gets huristic distance to target
		if (gc->getRole() == goblin || gc->getRole() == troll || gc->getRole() == boss) {
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
		if (this->PositionCheck(target) == true) {
			this->m_xPos -= directionX;
			this->m_yPos -= directionY;
		}
	}
	if (canAttack == true && moveCounter < this->m_speed) {
		this->attack(target);
		moveCounter++;
	}
}

void Paladin::attack(GameCharacter* target) {
	target->takeDamage(this->m_attack);
}

void Paladin::Special1() {
	//attackRate++;
}

void Paladin::stats() const {
	cout << this->m_name << " the Paladin" << endl;
	cout << "----------------------------------" << endl;
	cout << "Health: " << this->m_currHealth << "/" << this->m_maxHealth << endl;
	cout << "Attack: " << this->m_attack << endl;
	cout << "Defense: " << this->m_defense << endl;
	cout << "Speed: " << this->m_speed << endl;
	cout << "Luck: " << this->m_luck << endl;
}

