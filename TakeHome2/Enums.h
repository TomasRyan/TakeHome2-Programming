#pragma once
enum position {
	front,
	back
};
enum role
{
	blank,
	fighter,
	mage,
	thief,
	cleric,
	gunslinger,
	paladin,
	goblin,
	troll,
	boss
};

enum Verbs
{
	Error,	// 0
	Look,	// 1
	Talk,	// 2
	Use,	// 3
	Go,	// 4
	Attack,	// 5
	PickUp,	// 6
	Open,	// 7
	Rest,	// 8
	Inspect	// 9
};