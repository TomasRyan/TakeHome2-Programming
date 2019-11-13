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
	transform(s.begin(), s.end(), s.begin(), ::tolower); // make lower case
	s += "/";
	list<int> words;
	string temp = "";
	for (auto x : s)
	{
		if (x == ' ' || x == '/') // creates the word then checks against these values
		{
			if (temp == "look") {
				words.push_back(Look);
			}
			else if (temp == "talk") {
				words.push_back(Talk);
			}
			else if (temp == "use") {
				words.push_back(Use);
			}
			else if (temp == "go") {
				words.push_back(Go);
			}
			else if (temp == "attack") {
				words.push_back(Attack);
			}
			else if (temp == "pickup") {
				words.push_back(PickUp);
			}
			else if (temp == "open") {
				words.push_back(Open);
			}
			else if (temp == "rest") {
				words.push_back(Rest);
			}
			else if (temp == "inspect") {
				words.push_back(Inspect);
			}
			else {
				words.push_back(Error);
			}
			temp = "";
		}
		else
		{
			temp = temp + x;
		}
	}
	if (words.size() > 0) {
		if (words.size() > 1) {
			// uh figure out later
		}
		else {
			return words.front();
		}
	}
	else {
		return Error;
	}
}