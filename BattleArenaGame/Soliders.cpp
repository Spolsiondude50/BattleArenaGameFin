#include"Soliders.h"
#include<iostream>
#include<string>
using namespace std;
Soliders::Soliders()
{
}
Soliders::Soliders(int solidersHP, int solidersMaxHP) {
	solidersHP -= solidersMaxHP;
	solidersMaxHP = 35;
}
Soliders::~Soliders() {

}
int Soliders::takeDmg(int solidersDmg, int& solidersHP)
{
	solidersHP -= solidersDmg;
	if (solidersHP == 0)
		solidersHP = 0;
	else {
		solidersHP--;
	}
	return solidersHP;
}
bool Soliders::Breathing(int solidersHP)
{
	if (solidersHP > 0) {
		return true;
	}
	if (solidersHP == 0) {
		return false;
	}
}

int Soliders::Dmg(int solidersDmg)
{
	return 7;
}
