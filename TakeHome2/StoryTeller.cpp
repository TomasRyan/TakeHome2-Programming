#include "StoryTeller.h"

StoryTeller::StoryTeller(list<Chapter*> c) {
	this->ChapterList = c;
}

void StoryTeller::goToSection(int p) {
	this->criticalPath.push_back(this->currentSection);
	this->currentSection = p;
}

void StoryTeller::printSection(int index) {
	int counter = 0;
	for (Chapter* c : this->ChapterList) {
		if (counter == index) {
			(*c).printText();
		}
		counter++;
	}
}
