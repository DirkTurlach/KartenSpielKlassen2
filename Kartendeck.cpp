#include <iostream>
using namespace std;
#include "Kartendeck.h"
#include <iomanip>

void Kartendeck::initKartendeck()
{
	char farbe[4][10] = {"Karo", "Herz", "Pik", "Kreuz"};
	char name[13][10] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "As"};
	int wert[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

	for(int i = 0; i < 4; i++)
	{	
		for(int j = 0; j < 13; j++)
		{
			//cout << i << "   " << farbe[i] << endl;
			strcpy(k[i*13 + j].farbe, farbe[i]);

			k[i*13 + j].kartenWert = wert[j]; 

			strcpy(k[i*13 + j].kartenName, name[j]);

//			k[i*13 + j].isGezogen = 1;
		}
	}

}

void Kartendeck::ausgabe()
{
	for (int i = 1; i < 52; i++)
	{	
		cout << k[i].getKartenName() << "  ";
		cout << k[i].getFarbe() << "   ";
		cout << k[i].getKartenWert() << endl;
	}
}

void Kartendeck::mischen()
{
	Karte tmp;
	int position1, position2;
	srand(time(0));

	for (int i = 0; i < 200; i++)
	{
		position1 = rand()%52;
		position2 = rand()%52;

		tmp = k[position1];
		k[position1] = k[position2];
		k[position2] = tmp;
	}
}