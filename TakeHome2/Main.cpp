
#include "Battle.h"
#include "StoryTeller.h"
#include "Creator.h"
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 2 games programming
//--------------------------------------------
//
//--------------------------------------------
int main() {
	system("Cls");
	//Battle b = Battle();
	//b.printBattle();
	/*string t = "this is a test";
	list<string> listStringTest;
	string temp1 = "temp1";
	string temp2 = "temp2";
	string temp3 = "temp3";
	listStringTest.push_back(temp1);
	listStringTest.push_back(temp2);
	listStringTest.push_back(temp3);
	list<int> testInt = { 1, 2 };
	Chapter test(t, listStringTest, testInt);
	test.printText();
	test.printResponse(0);
	list<Chapter*> c;
	c.push_back(&test);
	StoryTeller story(c);
	story.printSection(0);
	string tester;
	cin >> tester;
	InputHandler input = InputHandler();
	list<int> verbResults = input.verbChecker(tester);
	for (int i : verbResults) {
		cout << i << endl;
	}*/
	Creator create = Creator();
	list<Chapter> c = create.create();
	StoryTeller story(c);
	//while (story.fightCheck() == false) {
	//	//system("Cls");
	//	story.printCurrentChapter();
	//	cout << "-----------------------------------" << endl;
	//	story.getResponse();
	//	cout << "----------------------------------------" << endl;
	//	/*system("Pause");
	//	cout << "----------------------------------------" << endl;*/
	//}
	Battle b = Battle();
	//b.printBattle();
	b.roundOfBattle();
	b.updateBattleBoard();
	b.printBattle();
	b.roundOfBattle();
	b.updateBattleBoard();
	b.printBattle();
	b.roundOfBattle();
	b.updateBattleBoard();
	b.printBattle();
	system("Pause");
}