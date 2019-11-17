#pragma once
class Item{
private:
	enum type {
		Attack,
		Defense,
		Health,
		other
	};
	int type;
	int Class;
	int buff;
public:
	Item(int t, int c, int b);

};