#include "Chapter.h"

Chapter::Chapter(string t, list<string> re, list<int> next) {
	this->text = t;
	this->responses = re;
	this->nextChapters = next;
}

void Chapter::printText() {
	cout << this->text << endl;
}

void Chapter::printResponse(int index) {
	int counter = 0;
	for (string i : this->responses) {
		if (counter == index) {
			cout << i << endl;
		}
		counter++;
	}
}