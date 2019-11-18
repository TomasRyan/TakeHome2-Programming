#include "Creator.h"
//--------------------------------------------
//	Tomás Ryan
//	k00243524
// 	take home assignment 2 games programming
//--------------------------------------------
//
//--------------------------------------------
/*************************************************
example layout
//--------------------------------------------------
//chapter a1 // chapter 0
int a1chapterID = 0;
string a1mainText = "this is a test";
list<string> a1Responses;
string a1Response1 = "temp1";	// error
string a1Response2 = "temp2";	// look
string a1Response3 = "temp3";	// talk
string a1Response4 = "temp1";	// use
string a1Response5 = "temp2";	// go
string a1Response6 = "temp3";	// attack
string a1Response7 = "temp1";	// pickup
string a1Response8 = "temp2";	// open
string a1Response9 = "temp3";	// rest
string a1Response10 = "temp1";	// inspect
a1Responses.push_back(a1Response1);
a1Responses.push_back(a1Response2);
a1Responses.push_back(a1Response3);
a1Responses.push_back(a1Response4);
a1Responses.push_back(a1Response5);
a1Responses.push_back(a1Response6);
a1Responses.push_back(a1Response7);
a1Responses.push_back(a1Response8);
a1Responses.push_back(a1Response9);
a1Responses.push_back(a1Response10);
list<int> a1ConnectedChapters = { 0,0,0,0,0,0,0,0,0,0 }; // default this back to the scene id
list<string> possablePaths;

Chapter a1Chapter(a1chapterID,a1mainText, a1Responses, a1ConnectedChapters, list<string> possablePaths;);
listOfChapters.push_back(a1Chapter);
//--------------------------------------------------
************************************************/

list<Chapter> Creator::create() {
	list<Chapter> listOfChapters;
	// chapter a1 // chapter 0
	int a1chapterID = 0;
	string a1mainText = "After travelling through the morning you find yourself approching the town of Huckleduke, a small mining town that has recently gained infamy for a majour orc problem that has been recently plaguing the town. Being an adventurer of no small renown you and your party have been personally requested to show up by a local lord called Rolen Hanali. you are to meet him at the BirdCage Inn.";
	list<string> a1Responses;
	string a1Response1 = "I dont understand";	// error
	string a1Response2 = "Looking around you see a plain, simple town, not filled with many luxurys, only basics goods stores and housing";	// look
	string a1Response3 = "Yiou cant find anybody who is willing to talk to strangers, only recieveing grunts from those who you tried to talk to";	// talk
	string a1Response4 = "there is nothing to use";	// use
	string a1Response5 = "You make your way to the inn";	// go
	string a1Response6 = "there are no threats present, your 97.4% sure";	// attack
	string a1Response7 = "lets not start stealing things the minute you get into town you kleptomaniac ";	// pickup
	string a1Response8 = "All doors are already open before you";	// open
	string a1Response9 = "Time to head to the inn then! You make your way to the inn";	// rest
	string a1Response10 = "Looking around you see a plain, simple town, not filled with many luxurys, only basics goods stores and housing";	// inspect
	a1Responses.push_back(a1Response1);
	a1Responses.push_back(a1Response2);
	a1Responses.push_back(a1Response3);
	a1Responses.push_back(a1Response4);
	a1Responses.push_back(a1Response5);
	a1Responses.push_back(a1Response6);
	a1Responses.push_back(a1Response7);
	a1Responses.push_back(a1Response8);
	a1Responses.push_back(a1Response9);
	a1Responses.push_back(a1Response10);
	list<int> a1ConnectedChapters = { 0,0,0,0,1,0,0,0,1,0 }; // default this back to the scene id
	list<string> a1PossablePaths;
	a1PossablePaths.push_back("Go to the inn");
	a1PossablePaths.push_back("look around");
	Chapter a1Chapter(a1chapterID,a1mainText, a1Responses, a1ConnectedChapters, a1PossablePaths);
	listOfChapters.push_back(a1Chapter);
	//--------------------------------------------------
	//chapter a2 // chapter 1
	int a2chapterID = 1;
	string a2mainText = "After being pointed the right way by the locals you quickly arrive at the BirdCage inn. It looks like a very modest establishment, but even at these early hours the place is filled to the brim with patrons";
	list<string> a2Responses;
	string a2Response1 = "I dont know what ya mean";	// error
	string a2Response2 = "Looking about you realise that you dont quite know how to find him, you approch the bar and ask the patrons about him. 'Ah are ye them adventurers mistor Hanali had hired? sit yourselves down and I will send somebody to fetch him for ya'";	// look
	string a2Response3 = "You ask the patrons about Rolen Hanali, a dwarfen man with a long ginger beard knows about your quary. 'Ah are ye them adventurers mistor Hanali had hired? sit yourselves down and I will send somebody to fetch him for ya' with this you see him signal the barkeep as he nods and head into a backroom, returning after a few secounds and bekons your party to follow him ";	// talk
	string a2Response4 = "temp1";	// use
	string a2Response5 = "temp2";	// go
	string a2Response6 = "https://www.youtube.com/watch?v=26wEWSUUsUc";	// attack
	string a2Response7 = "temp1";	// pickup
	string a2Response8 = "temp2";	// open
	string a2Response9 = "temp3";	// rest
	string a2Response10 = "temp1";	// inspect
	a2Responses.push_back(a2Response1);
	a2Responses.push_back(a2Response2);
	a2Responses.push_back(a2Response3);
	a2Responses.push_back(a2Response4);
	a2Responses.push_back(a2Response5);
	a2Responses.push_back(a2Response6);
	a2Responses.push_back(a2Response7);
	a2Responses.push_back(a2Response8);
	a2Responses.push_back(a2Response9);
	a2Responses.push_back(a2Response10);
	list<int> a2ConnectedChapters = { 1,1,1,1,1,1,1,1,1,1 }; // default this back to the scene id
	list<string> a2PossablePaths;
	a2PossablePaths.push_back("Look for Rolen Hanali");
	a2PossablePaths.push_back("Talk to the patrons to see if they know where he is");
	Chapter a2Chapter(a2chapterID, a2mainText, a2Responses, a2ConnectedChapters, a2PossablePaths);
	listOfChapters.push_back(a2Chapter);
	//--------------------------------------------------
	//chapter a3 // chapter 2
	int a3chapterID = 2;
	string a3mainText = "After being pointed the right way by the locals you quickly arrive at the BirdCage inn. It looks like a very modest establishment, but even at these early hours the place is filled to the brim with patrons";
	list<string> a3Responses;
	string a3Response1 = "I dont know what ya mean";	// error
	string a3Response2 = "Looking about you realise that you dont quite know how to find him, you approch the bar and ask the patrons about him. 'Ah are ye them adventurers mistor Hanali had hired? sit yourselves down and I will send somebody to fetch him for ya'";	// look
	string a3Response3 = "You ask the patrons about Rolen Hanali, a dwarfen man with a long ginger beard knows about your quary. 'Ah are ye them adventurers mistor Hanali had hired? sit yourselves down and I will send somebody to fetch him for ya' with this you see him signal the barkeep as he nods and head into a backroom, returning after a few secounds and bekons your party to follow him ";	// talk
	string a3Response4 = "temp1";	// use
	string a3Response5 = "temp2";	// go
	string a3Response6 = "https://www.youtube.com/watch?v=26wEWSUUsUc";	// attack
	string a3Response7 = "temp1";	// pickup
	string a3Response8 = "temp2";	// open
	string a3Response9 = "temp3";	// rest
	string a3Response10 = "temp1";	// inspect
	a3Responses.push_back(a3Response1);
	a3Responses.push_back(a3Response2);
	a3Responses.push_back(a3Response3);
	a3Responses.push_back(a3Response4);
	a3Responses.push_back(a3Response5);
	a3Responses.push_back(a3Response6);
	a3Responses.push_back(a3Response7);
	a3Responses.push_back(a3Response8);
	a3Responses.push_back(a3Response9);
	a3Responses.push_back(a3Response10);
	list<int> a3ConnectedChapters = { 2,2,2,2,2,2,2,2,2,2 }; // default this back to the scene id
	list<string> a3PossablePaths;
	a3PossablePaths.push_back("Look for Rolen Hanali");
	a3PossablePaths.push_back("Talk to the patrons to see if they know where he is");
	Chapter a3Chapter(a3chapterID, a3mainText, a3Responses, a3ConnectedChapters, a3PossablePaths);
	listOfChapters.push_back(a3Chapter);
	//--------------------------------------------------
	//chapter a1 // chapter 0
	int a4chapterID = 3;
	string a4mainText = "this is a test";
	list<string> a4Responses;
	string a4Response1 = "temp1";	// error
	string a4Response2 = "temp2";	// look
	string a4Response3 = "temp3";	// talk
	string a4Response4 = "temp1";	// use
	string a4Response5 = "temp2";	// go
	string a4Response6 = "temp3";	// attack
	string a4Response7 = "temp1";	// pickup
	string a4Response8 = "temp2";	// open
	string a4Response9 = "temp3";	// rest
	string a4Response10 = "temp1";	// inspect
	a4Responses.push_back(a4Response1);
	a4Responses.push_back(a4Response2);
	a4Responses.push_back(a4Response3);
	a4Responses.push_back(a4Response4);
	a4Responses.push_back(a4Response5);
	a4Responses.push_back(a4Response6);
	a4Responses.push_back(a4Response7);
	a4Responses.push_back(a4Response8);
	a4Responses.push_back(a4Response9);
	a4Responses.push_back(a4Response10);
	list<int> a4ConnectedChapters = { 0,0,0,0,0,0,0,0,0,0 }; // default this back to the scene id
	list<string> a4PossablePaths;
	a4PossablePaths.push_back("Idunno");
	Chapter a4Chapter(a4chapterID, a4mainText, a4Responses, a4ConnectedChapters, a4PossablePaths);
	listOfChapters.push_back(a4Chapter);
	//--------------------------------------------------
	// THE END
	return listOfChapters;
}