//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 2 games programming
//--------------------------------------------
//
//--------------------------------------------

#include "Chapter.h"
class StoryTeller {
private:
	// 
	//	everything will be printed to this list to keep a record if player wants to keep track
	list<string> recordKeeper;
	list<int> criticalPath;
	//	the current screen on the story
	int currentSection = 0;
	//
	list<Chapter> ChapterList;
	bool inFight = false;
public:
	StoryTeller();
	// gets a pointed list off ALL chapters in the game
	StoryTeller(list<Chapter> c);
	// change the chapter the player is on
	void goToSection(int p);
	//	prints the chapter main text of the index entered
	void printSection(int index);
	//	prints the current chapter that the index is stored within ChapterList
	void printCurrentChapter();
	//	get the response for the cvurrent chapter
	void getResponse();
	//	check if we in a fight
	bool fightCheck();
};