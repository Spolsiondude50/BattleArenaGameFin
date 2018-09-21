#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h> 
#include"Unit.h"
using namespace std;
bool demonsAlive(Unit* hordeArr)
{
	if ((sizeof(hordeArr) / 4) > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

bool solidersAlive(Unit * solidersArr)
{

	if ((sizeof(solidersArr) / 4) > 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	Unit horde[27];
	Unit army[10];
	int HSize = 27;
	int ASize = 10;
	while (HSize > 0 && ASize > 0 ) {
		if (army) {
			for (int i = 0; i < 10; i++) {
				int Dmg = rand() % 17;
				horde[i].isAlive();
				cout << "A Solider attacks for " << Dmg << " damage." << endl;
				horde[i].takeDmg(Dmg);
				if ( HSize > 0)
				{
					cout << "The Demon has fallen" << endl;
					HSize--;
					cout << "There are still " << HSize << " horde left." << endl;
					break;
				}
				if (HSize <= 0) {
					break;
				}
			}

		}
		if (horde) {
			for (int i = 0; i < 27; i++) {
				int Dmg = rand() % 22;
				army[i].isAlive();
				cout << "A demon attacks for " << Dmg << " damage." << endl;
				army[i].takeDmg(Dmg);
				if (ASize > 0)
				{
				cout << "The Marine has been KIA" << endl;
				ASize--;
				cout << "There are still " << ASize << " marines left." << endl;
				break;
				}
				if (ASize <= 0) {
					break;
				}
			}
		}
		
		}
	cout << "The fight is over. ";
	if (ASize == 0) {
	cout << "The Demons has beaten us We will get them next" << endl;
	}
	else if (HSize = 0) {
	cout << "The Army is victorius but I feel they will be back" << endl;
	}
	system("pause");
	return 0;
}