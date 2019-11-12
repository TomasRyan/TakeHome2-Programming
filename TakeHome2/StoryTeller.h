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
	list<Chapter*> ChapterList;
public:
	StoryTeller(list<Chapter*> c);
	void goToSection(int p);
	void printSection(int index);

};