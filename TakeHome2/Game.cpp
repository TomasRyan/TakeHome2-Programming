#include "Game.h"
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Game.cpp
//--------------------------------------------
// create the objects and assign each enemy and player unique typeID, health and x and y coords max health should be 170, speed is between 1 and 3. Place these GameCharacters in a list of GameCharacter pointers e.g. vpGameCharacters
void Game::init() { 
	Player* pPlayer = new Player(); //make a player and have it be pointed
	pPlayer->RandomPos(); // randomise the position of the player 
	vpGameCharacters.push_back(pPlayer); // push into the vecter
	for (int i = 0; i < 4; i++) { // do 4 times
		Enemy* pEnemy = new Enemy(); //make a enemy and have it be pointed
		pEnemy->RandomPos(); // randomise the position of the enemy 
		vpGameCharacters.push_back(pEnemy); // push into the vecter
	}
}
// cycle through the vector of GameCharacter ( enemy and player objects) and call the render function for each object, aswell as filling in the spaces between the elements with " 0 " to help the player play decently
void Game::render() { 
	vpGameCharacters.sort(); // sort the elements of the list by health
	bool isDrawn = false; // create the bool to help when drawing the game screen
	cout << "----------------------------------" << endl;
	for (int i = 0; i < 144; i++) { // do 144 times
		isDrawn = false; // reset the bool to false
		if (i % 12 == 0) { // if at the end of a line go next
			cout << endl;
		}
		int y = i + 1; // ajust the value of i to test the position of each gameCharecter against
		for (GameCharacter* g : vpGameCharacters) { // for each member of the gamecharecter list
			if ((*g).getPos() == y && isDrawn == false) { // check if the pos of the gamecharecter object is the same as teh one to be drawn
				(*g).render(); // draw the gamecharecter object
				isDrawn = true; // set to true so default drawn in charecter is skipped for this position
			}
		}
		if (isDrawn == false) { // if a object wasnt cound in this position draw in the default charecter
			cout << " o ";
			//cout << i << endl;
		}
	}
	cout << "" << endl;
	cout << "----------------------------------" << endl;
}
//cycle through the vector of GameCharacter (enemy and player objects) and call the update function for each object
void Game::update() { 
	for (GameCharacter* g : vpGameCharacters) {
		(*g).update();
	}
}
// Check the vector to see if two objects occupy the same coords declare that a battle must take  place. The object with the higher health wins. The loser will have its health set to 0.
void Game::battle() {  
	for (GameCharacter* g : vpGameCharacters) { // create 2 seperate for loops to test all elements against each other
		for (GameCharacter* c : vpGameCharacters) {
			if (g != c) { // so that when checking against itself it doesnt deleate itself
				if (g->getPos() == c->getPos() && g->isAlive() == true && c->isAlive() == true) {
					printBattle(g, c);
					if (g->compareHealth(*c) == true) { // if g has more health, kill object c
						printVictor(g);
						c->killOff();
					}
					else { // otherwise kill g
						printVictor(c);
						g->killOff();
					}
				}
			}
		}
	}

}
// cycle through the vector of GameCharacters ( enemy and player objects) and call the stats function for each object
void Game::stats() { 
	for (GameCharacter* g : vpGameCharacters) {
		(*g).stats();
	}
}
//remove any objects from the list whose health is 0 (Hint use isAlive function)
void Game::clean() { 
	list<GameCharacter*>::iterator it = vpGameCharacters.begin(); // iterater pointed at the start of list of GameCharecters
	while (it != vpGameCharacters.end()) {
		if ((*it)->isAlive() != true) {
			delete* it;
			it = vpGameCharacters.erase(it); // deletes element that it is pointing at then points it to the element following the deleted element
		}
		else {
			it++;
		}
	}
}
// print out all this for when a instance of battle happens, to help show the player that a battle has actually happened
//	input: GameCharacter* and GameCharacter* to be compared against each other
void Game::printBattle(GameCharacter* a, GameCharacter* b) { 
	for (int i = 0; i < 5; i++) { // print out the battle graphic
		cout << "!" << endl;
		cout << "!!" << endl;
		cout << "E!!" << endl;
		cout << "LE!!!" << endl;
		cout << "TLE!!" << endl;
		cout << "TTLE!!" << endl;
		cout << "ATTLE!!" << endl;
		cout << "BATTLE!!" << endl;
		cout << "BATTLE!" << endl;
		cout << "BATTLE" << endl;
		cout << "BATTL" << endl;
		cout << "BATT" << endl;
		cout << "BAT" << endl;
		cout << "BA" << endl;
		cout << "B" << endl;
		cout << "" << endl;
	}
	cout << "********************************" << endl;
	cout << (*a).getName() << " VS " << (*b).getName() << endl;
}
// print out a graphic to show who won a battle
//	input: GameCharacter*
void Game::printVictor(GameCharacter* a) {
	cout << "********************************" << endl;
	cout << (*a).getName() << " IS VICTORIOUS!!" << endl;
	cout << "********************************" << endl;
	system("Pause");
}