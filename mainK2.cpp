#include<iostream>
using namespace std;
#include "Karte.h"



void main()
{
	Karte testkarte;
	
	testkarte.initKarteTest();
	testkarte.ausgabeKarte();
	cout << endl;

	testkarte.setKartenWert(4);
	testkarte.setFarbe("blau");
	testkarte.setKartenName("Heinz");

	testkarte.ausgabeKarte();
	cout << "Der neue Kartenwert ist: " << testkarte.getKartenWert() << endl;
	cout << "Die neue Kartenfarbe ist: " << testkarte.getFarbe() << endl;
	cout << "Der neue Kartenname ist: " << testkarte.getKartenName() << endl;
}