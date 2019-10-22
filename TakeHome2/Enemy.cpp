#include "Enemy.h";
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 1 games programming
//--------------------------------------------
//	Player.cpp
//--------------------------------------------
// move the enemy object's position based on random values
void Enemy::update() {
	int x = this->m_x; // create a copy the objects position to do math with without changing it
	int y = this->m_y;
	int random; // random value for direction of the enemys movement
	srand(rand());
	random = rand() % 10 + 1;
	if (random == 10) {
		x -= this->m_speed;
		y -= this->m_speed;
	}
	else if (random == 9) {
		x += this->m_speed;
		y += this->m_speed;
	}
	else if (random == 8) { // southeast
		x++;
		y++;
	}
	else if (random == 7) { // south
		y++;
	}
	else if (random == 6) { // southwest
		x--;
		y++;
	}
	else if (random == 5) { //east
		x++;
	}
	else if (random == 4) { // west
		x--;
	}
	else if (random == 3) { // northeast
		x++;
		y--;
	}
	else if (random == 2) { // north
		y--;
	}
	else if (random == 1) { // northwest
		x--;
		y--;
	}
	else {
		system("Pause");
	}
	// check to ensure still within boundry
	if (x < 1) {
		while (x < 1) {
			x++;
		}
		this->m_speed *= -1;
	}
	if (x > 12) {
		while (x > 12) {
			x--;
		}
		this->m_speed *= -1;
	}
	if (y < 1) {
		while (y < 1) {
			y++;
		}
		this->m_speed *= -1;
	}
	if (y > 12) {
		while (y > 12) {
			y--;
		}
		this->m_speed *= -1;
	}
	this->m_x = x; // set the new values back into the obeject, and lower the health too
	this->m_y = y;
	this->m_health -= m_speed * 3;
}
