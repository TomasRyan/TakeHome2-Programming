#include <string>
#include <algorithm> 
#include <list> 
#include "Enums.h"
#include <iostream>
using namespace std;
class Chapter {
private:
	string text; // the main text of the chapter
	list<string> responses; // length of enum Verbs, with the resonse correlating with the index of enum verbs
	list<int> nextChapters; // the index of the chapters that can be accessed from here

public:
	//	
	Chapter(string t, list<string> re, list<int> next);
	//prints string text
	void printText();
	// prints out the string at the index of responses
	void printResponse(int i);
};