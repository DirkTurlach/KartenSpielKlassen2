#include <iostream>
using namespace std;
#include "Kartendeck.h"



//Kartendeck::Kartendeck(void)
//{
//}


//*************** Testmethoden *************************

void Kartendeck::initKartendeck()
{
	//k.setKartenWert(3);
	//k.setFarbe("Herz");
	//k.setKartenName("As");


	char farbe[4][10] = {"Karo", "Herz", "Pik", "Kreuz"};
	char kartenName[13][10] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "As"};
	int kartenWert[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

	for(int i = 0; i < 4; i++)
	{	
		for(int j = 0; j <  13; j++)
		{
			k.setKartenWert(3);
			k.setFarbe("Herz");
			k.setKartenName("As");
			
			
			//strcpy(deck -> k[i*13 + j].farbe, k.farbe[i]);
			//deck -> k[i*13 + j].wert = k.kartenWert[j];            
			//strcpy(deck -> k[i*13 + j].name, k.kartenName[j]);
			//deck -> k[i*13 + j].isGezogen = 1;
		}
	}
}

void Kartendeck::ausgabeKarte()
{
	cout << k.getKartenWert() << endl;
	cout << k.getFarbe() << endl;
	cout << k.getKartenName() << endl;
}