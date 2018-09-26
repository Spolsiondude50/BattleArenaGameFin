#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h> 
#include"Unit.h"

using std::cout;
using std::endl;
int main() {
	Unit horde[3];
	Unit army[3];
	int HSize = 3;
	int ASize = 3;
	
	while (HSize > 0 && ASize > 0) {
		if (army) {
			for (int i = 0; i < 3; i++) {
				int EnemyHealth = 0;
				int TargetA = -1;
				cout << "Allies's Turn" << endl;
				while (EnemyHealth == 0)
				{
					TargetA = rand() % 3;
					EnemyHealth = horde[TargetA].HP;
				}
				horde[TargetA].takeDmg();
				cout << "Ally attacks member "<< TargetA <<" of horde"<< endl;
				if (horde[TargetA].isAlive() == false)
				{
					cout << "Horde member"<<TargetA<<" has fallen" << endl;
					HSize--;
					cout << "There are still " << HSize << " horde left." << endl;
					break;
				}
				if (horde[TargetA].isAlive() == true) {
					break;
				}
			}

		}

			if (horde) {
				cout << "Horde's Turn" << endl;
				for (int i = 0; i < 3; i++) {
			int AllyHealth = 0;
			int TargetE = -1;
			while (AllyHealth == 0)
			{
			TargetE = rand() % 3;
			AllyHealth = army[TargetE].HP;
			}
			army[TargetE].takeDmg();
			cout << "Horde attacks member " << TargetE << " of allies" << endl;
			if (army[TargetE].isAlive() == false)
			{
				
				cout << "Ally member" << TargetE << " has fallen" << endl;
				ASize--;
				cout << "There are still " << ASize << " marines left." << endl;
					break;
			}
			if (army[TargetE].isAlive() == true) {
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