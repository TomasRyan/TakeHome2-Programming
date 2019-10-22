#include "Player.h"
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Player.cpp
//--------------------------------------------

// Player input and movement logic
void Player::update() { //virtual function
	cout << "that it requires user input to determine where to move" << endl;
	cout << "Where would you like to go??" << endl; // output teh possible inputs to move teh charecter
	cout << "Type in the corresponding number to go in that direction: " << endl;
	cout << "	1	2	3" << endl;
	cout << "	4	5	6" << endl;
	cout << "	7	8	9" << endl;
	int random; // random fucntion for 1/5 chance to moove at m_speed distance
	srand(rand());
	random = rand() % 10 + 1;
	int speed = 1;
	if (random > 8) { // if odds are met then move speed = m_speed
		speed = this->m_speed;
	}
	int direction;
	cin >> direction;
	if (!cin) { // input check if it does not = a int value
		cin.clear();  //	if input is bad, clear it out and ignore any errors that this may produce
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
		cout << "please enter a valid input" << endl;
		cin.clear();
		this->update(); // restarts the method
	}
	else if (direction <= 0 || direction >= 10) { // check if number inputed is within usable limits
		cout << "please enter a valid input" << endl;
		cin.clear();
		this->update(); // restarts the method
	}
	else { //	move in direction entered
		if (direction == 1) { // northwest
			for (int i = 0; i < speed; i++) {
				if (this->m_x > 1 && this->m_y > 1) { //
					this->m_x--;
					this->m_y--;
				}
				else if (this->m_x > 1 && this->m_y <= 1) {
					this->m_x--;
				}
				else if (this->m_x <= 1 && this->m_y > 1) {
					this->m_y--;
				}
			}
		}
		else if (direction == 2) { // north
			for (int i = 0; i < speed; i++) {
				if (this->m_y > 1) {
					this->m_y--;
				}
			}
		}
		else if (direction == 3) { // northeast
			for (int i = 0; i < speed; i++)
				if (this->m_x < 12 && this->m_y > 1) {
					this->m_x++;
					this->m_y--;
				}
				else if (this->m_x < 12 && this->m_y <= 1) {
					this->m_x++;
				}
				else if (this->m_x >= 12 && this->m_y > 1) {
					this->m_y--;
				}
		}
		else if (direction == 4) { //west
			for (int i = 0; i < speed; i++) {
				if (this->m_x > 1) {
					this->m_x--;
				}
			}
		}
		else if (direction == 5) {
			// yeah we aint moving
		}
		else if (direction == 6) { //east
			for (int i = 0; i < speed; i++) {
				if (this->m_x < 12) {
					this->m_x++;
				}
			}
		}
		else if (direction == 7) { //southwest
			for (int i = 0; i < speed; i++) {
				if (this->m_x > 1 && this->m_y < 12) { // ok
					this->m_x--;
					this->m_y++;
				}
				else if (this->m_x > 1 && this->m_y >= 12) {
					this->m_x--;
				}
				else if (this->m_x <= 1 && this->m_y < 12) {
					this->m_y++;
				}
			}
		}
		else if (direction == 8) { //south
			for (int i = 0; i < speed; i++) {
				if (this->m_y < 12) {
					this->m_y++;
				}

			}
		}
		else if (direction == 9) { //southeast
			for (int i = 0; i < speed; i++) {
				if (this->m_x < 12 && this->m_y < 12) { // both ok
					this->m_x++;
					this->m_y++;
				}
				else if (this->m_x < 12 && this->m_y >= 12) { 
					this->m_x++;
				}
				else if (this->m_x >= 12 && this->m_y < 12) {
					this->m_y++;
				}
			}
		}
		this->m_health -= m_speed * 2;
	}
}