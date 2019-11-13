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
chapter a1 // chapter 0
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
Chapter a1Chapter(a1chapterID,a1mainText, a1Responses, a1ConnectedChapters);
listOfChapters.push_back(a1Chapter);
//--------------------------------------------------
************************************************/

list<Chapter> Creator::create() {
	list<Chapter> listOfChapters;
	// chapter a1 // chapter 0
	int a1chapterID = 0;
	string a1mainText = "After travelling through the morning you find yourself approching the town of Huckleduke, a small mining town that has recently gained infamy for a majour orc problem that has been recently plaguing the town. Being an adventurer of no small renown you and your party have been personally requested to show up. you are to meet him at the BirdCage Inn, but as you enter the town what would you like to do?? ";
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
	Chapter a1Chapter(a1chapterID,a1mainText, a1Responses, a1ConnectedChapters);
	listOfChapters.push_back(a1Chapter);
	//--------------------------------------------------
	//chapter a2 // chapter 1
	int a2chapterID = 1;
	string a2mainText = "You arrive at the inn, dispite it being just past midday the place is packed";
	list<string> a2Responses;
	string a2Response1 = "I dont know what ya mean";	// error
	string a2Response2 = "Looking around you ";	// look
	string a2Response3 = "temp3";	// talk
	string a2Response4 = "temp1";	// use
	string a2Response5 = "temp2";	// go
	string a2Response6 = "temp3";	// attack
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
	Chapter a2Chapter(a2chapterID, a2mainText, a2Responses, a2ConnectedChapters);
	listOfChapters.push_back(a2Chapter);
	//--------------------------------------------------
	// THE END
	return listOfChapters;
}