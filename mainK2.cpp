#include<iostream>
using namespace std;
#include "Karte.h"



void main()
{

	Karte testkarte;
	
	testkarte.initKarteTest();
	testkarte.ausgabeKarte();
	testkarte.changeFarbe();
	testkarte.ausgabeKarte();

	testkarte.setKartenWert(4);

	testkarte.ausgabeKarte();
	cout << "Der neue Kartenwert ist: " << testkarte.getKartenWert() << endl;

}