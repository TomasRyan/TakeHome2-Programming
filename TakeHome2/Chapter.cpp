#include "Chapter.h"

Chapter::Chapter(int ID, string t, list<string> re, list<int> next, list<string> aRe) {
	this->chapterID = ID;
	this->text = t;
	this->responses = re;
	this->nextChapters = next;
	this->availableresponses = aRe;
}

void Chapter::printText() {
	cout << this->text << endl;
	cout << "What would you like to do?" << endl;
	cout << "----------------------------------------" << endl;
	int count = 1;
	for (string i : this->availableresponses) {
		cout << count << ": " <<i << endl;
		count++;
	}
}

int Chapter::printResponse(string index) {
	int inputsID = input.verbChecker(index);
	int counter = 0;
	for (string i : this->responses) {
		if (counter == inputsID) {
			cout << i << endl;
			int nextCounter = 0;
			for (int y : this->nextChapters) {
				if (nextCounter == inputsID) {
					return y;
				}
				nextCounter++;
			}
		}
		counter++;
	}
	return this->chapterID; // repeat current chapter if needed
}