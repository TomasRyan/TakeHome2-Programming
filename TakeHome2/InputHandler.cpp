#include "InputHandler.h"
InputHandler::InputHandler() {}
// will return a number regarding the input error, or return a error
int InputHandler::numberChecker(int num,int rangeLow, int rangeHigh) {
	if (num > rangeLow&& num < rangeHigh) {
		return num;
	}
	else
		return NULL;
}

int InputHandler::verbChecker(string s) {
	return 0;
}