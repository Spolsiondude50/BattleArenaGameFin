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
		cout << HP << endl;
		return true;
	}
	else if(HP <= 0) {
		return false;
	}
}


int  Unit::takeDmg()
{
	HP -= Dmg;
	return HP;
}
