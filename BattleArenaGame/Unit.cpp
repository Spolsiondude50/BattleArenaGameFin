#include"Unit.h"
#include<iostream>
#include<string>
using namespace std;
Unit::Unit() {
	HP = MAXHP;
}
Unit::~Unit() {

}
bool Unit::isAlive()
{
	if (HP > 0) {
		return 1;
	}
	else if(HP <= 0) {
		return 0;
	}
}

int  Unit::takeDmg(int Dmg)
{
	HP -= Dmg;
	return HP;
}
