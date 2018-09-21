#pragma once
#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
class Unit{
public:

	Unit();
	~Unit();
	bool isAlive();
	int takeDmg(int Dmg);
	int HP;
	int Dmg = rand() % 15;
	int MAXHP = rand() % 35;

private:
};