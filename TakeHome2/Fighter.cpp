#include "Fighter.h";
Fighter::Fighter() {
	this->m_typeID = fighter;

}
void Fighter::attack(list<GameCharacter*> battleGrid) {
	int moveCounter = 0;
	int attackCount = 0;
	for (GameCharacter* gc : battleGrid) {
		if (gc->getRole() == goblin) { 
			// get pos and move towards it
		}
	}
}
void Fighter::Special1() {

}