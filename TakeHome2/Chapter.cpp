#include "Chapter.h"

Chapter::Chapter(int ID, string t, list<string> re, list<int> next) {
	this->chapterID = ID;
	this->text = t;
	this->responses = re;
	this->nextChapters = next;
}

void Chapter::printText() {
	cout << this->text << endl;
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
					if (y = this->chapterID) {
						// DO THIS NOW
					}
					else {
						return y;
					}
				}
				nextCounter++;
			}
		}
		counter++;
	}
	return this->chapterID;
}