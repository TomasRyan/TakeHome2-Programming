#include <string>
#include <algorithm> 
#include <list> 
#include "Enums.h""
using namespace std;
class InputHandler {
public:
	InputHandler();
	int numberChecker(int num, int rangeLow, int rangeHigh);
	//return a list of ints of all verbs used in enum verbs
	list<int> verbChecker(string s);
};