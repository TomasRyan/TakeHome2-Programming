#pragma once
#include <list>
#include "GameCharacter.h";
#include "Fighter.h"
#include "Thief.h"
#include "Cleric.h"
#include "GunSlinger.h"
#include "Paladin.h"
#include "Mage.h"
class Party {
private:
	list<GameCharacter*> partyList;
	list<string> inventory; // needs to be updated
	Random generater = Random();
public:
	Party();
	void AddPartyMembers();
	void LevelParty();
	list<GameCharacter*> getPartyList();
	void drawHud();
	void createFighter();
	void createThief();
	void createCleric();
	void createGunSlinger();
	void createPaladin();
	void createMage();
};