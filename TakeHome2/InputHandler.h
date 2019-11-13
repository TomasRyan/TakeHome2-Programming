#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <string>
#include <algorithm> 
#include <list> 
#include "Enums.h""
using namespace std;
class InputHandler {
public:
	InputHandler();
	int numberChecker(int num, int rangeLow, int rangeHigh);
	//return a single int of all verbs used in enum verbs
	int verbChecker(string s);
};
#endif // INPUTHANDLER_H