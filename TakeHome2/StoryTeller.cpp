#include "StoryTeller.h"
StoryTeller::StoryTeller() {

}
StoryTeller::StoryTeller(list<Chapter> c) {
	this->ChapterList.assign(c.begin(), c.end());
}
// change the chapter the player is on
void StoryTeller::goToSection(int p) {
	this->criticalPath.push_back(this->currentSection);
	this->currentSection = p;
}

void StoryTeller::printSection(int index) {
	int counter = 0;
	for (Chapter c : this->ChapterList) {
		if (counter == index) {
			(c).printText();
		}
		counter++;
	}
}

void StoryTeller::printCurrentChapter() {
	int counter = 0;
	for (Chapter c : this->ChapterList) {
		if (counter == this->currentSection) {
			c.printText();
		}
		counter++;
	}
}

void StoryTeller::getResponse() {
	int counter = 0;
	string temp = "";
	cin >> temp;
	for (Chapter c : this->ChapterList) {
		if (counter == this->currentSection) {
			int nextScene = c.printResponse(temp);
			goToSection(nextScene);
			break;
		}
		counter++;
	}
}

bool StoryTeller::fightCheck()
{
	return this->inFight;
}
