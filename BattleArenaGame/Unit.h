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
	int takeDmg();
	int RandomTarget = rand() % 3;
	int HP;
	int Dmg = 4;
	int MAXHP = rand() % 15;

private:
};