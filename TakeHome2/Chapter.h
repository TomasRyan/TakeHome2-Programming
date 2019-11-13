#ifndef CHAPTER_H
#define CHAPTER_H

#include <string>
#include <algorithm> 
#include <list> 
#include "Enums.h"
#include <iostream>
#include "InputHandler.H"
using namespace std;

class Chapter {
private:
	int chapterID;
	string text; // the main text of the chapter
	list<string> responses; // length of enum Verbs, with the resonse correlating with the index of enum verbs
	list<int> nextChapters; // the index of the chapters that can be accessed from here, correlating to the enum position
	InputHandler input = InputHandler();

public:
	//	
	Chapter(int ID, string t, list<string> re, list<int> next);
	//prints string text
	void printText();
	// prints out the string at the index of responses and returns the next scene
	int printResponse(string i);
};
#endif // CHAPTER_H