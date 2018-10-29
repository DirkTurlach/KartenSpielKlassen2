#include<iostream>
using namespace std;
#include "Kartendeck.h"



void main()
{
	Kartendeck d1;	

	d1.initKartendeck();	
	
	cout << d1.k[0].getKartenName() << "  ";
	cout << d1.k[0].getFarbe() << "   ";
	cout << d1.k[0].getKartenWert() << endl;

	d1.mischen();
	d1.ausgabe();
}