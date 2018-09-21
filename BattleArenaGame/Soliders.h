#pragma once
#include"Characters.h"
class Soliders{
public:
	Soliders();
	Soliders(int solidersHP, int solidersMaxHP);
	~Soliders();
	bool Breathing(int solidersHP);
	int Dmg(int solidersDmg);
	int takeDmg(int solidersDmg, int& soliderHP);
	int soliders;
	int army[10];
	int solidersSize = 10;
	int solidersBreathing = 10;
	int	solidersHP;
	int soliderMaxHP;
	int solidersDmg;
private:
};