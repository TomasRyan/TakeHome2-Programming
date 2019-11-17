#include "Party.h"
#include <algorithm>

Party::Party() {
	this->AddPartyMembers();
}

void Party::AddPartyMembers() {
	string choiceString;
	
	while(this->partyList.size() < 4) {
		cout << "What Party unit would you like to have?" << endl;
		cout << "######################################################" << endl;
		cout << "1: Fighter" << endl;
		cout << "2: Thief" << endl;
		cout << "3: Cleric" << endl;
		cout << "4: Mage" << endl;
		cout << "5: Gunslinger" << endl;
		cout << "6: Paladin" << endl;
		cin >> choiceString;
		cin.clear();
		transform(choiceString.begin(), choiceString.end(), choiceString.begin(), ::tolower);
		if (choiceString == "1" || choiceString == "fighter") {
			
			this->createFighter();
		}
		else if (choiceString == "2" || choiceString == "thief") {
			this->createThief();
		}
		else if (choiceString == "3" || choiceString == "cleric") {
			this->createCleric();
		}
		else if (choiceString == "4" || choiceString == "mage") {
			this->createMage();
		}
		else if (choiceString == "5" || choiceString == "gunslinger") {
			this->createGunSlinger();
		}
		else if (choiceString == "6" || choiceString == "paladin") {
			this->createPaladin();
		}
		cout << "######################################################" << endl;
		for (GameCharacter* g : this->partyList) {
			g->stats();
		}
		cout << "######################################################" << endl;
	}
}

void Party::LevelParty() {

}

list<GameCharacter*> Party::getPartyList() {
	return this->partyList;
}

void Party::drawHud() {
	cout << "######################################################" << endl;
	cout << endl;
}

void Party::createFighter() {
	cout << "enter in your Fighters name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 8;
	int lowTemp = 4;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 3;
	highTemp = 30;
	lowTemp = 20;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 6;
	lowTemp = 4;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 5;
	Fighter* f = new Fighter(name, health, speed, attack, defense, luck);
	this->partyList.push_back(f);
}

void Party::createThief() {
	cout << "enter in your Thief name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 10;
	int lowTemp = 6;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 5;
	highTemp = 20;
	lowTemp = 10;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 5;
	lowTemp = 3;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 20;
	Thief* t = new Thief(name, health, speed, attack, defense, luck);
	this->partyList.push_back(t);
}

void Party::createCleric() {
	cout << "enter in your Cleric name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 6;
	int lowTemp = 2;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 3;
	highTemp = 40;
	lowTemp = 30;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 6;
	lowTemp = 4;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 2;
	Cleric* c = new Cleric(name, health, speed, attack, defense, luck);
	this->partyList.push_back(c);
}

void Party::createGunSlinger() {
	cout << "enter in your GunSlingers name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 10;
	int lowTemp = 6;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 3;
	highTemp = 20;
	lowTemp = 10;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 4;
	lowTemp = 2;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 20;
	GunSlinger* g = new GunSlinger(name, health, speed, attack, defense, luck);
	this->partyList.push_back(g);
}

void Party::createPaladin() {
	cout << "enter in your Paladin name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 6;
	int lowTemp = 2;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 3;
	highTemp = 40;
	lowTemp = 30;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 6;
	lowTemp = 4;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 2;
	Paladin* p = new Paladin(name, health, speed, attack, defense, luck);
	this->partyList.push_back(p);
}

void Party::createMage() {
	cout << "enter in your Mages name: " << endl;
	string name;
	cin >> name;
	cin.clear();
	int highTemp = 10;
	int lowTemp = 6;
	int attack = this->generater.getRandom(lowTemp, highTemp);
	int speed = 3;
	highTemp = 20;
	lowTemp = 10;
	int health = this->generater.getRandom(lowTemp, highTemp);
	highTemp = 4;
	lowTemp = 2;
	int defense = this->generater.getRandom(lowTemp, highTemp);
	int luck = 10;
	Mage* m = new Mage(name, health, speed, attack, defense, luck);
	this->partyList.push_back(m);
}
