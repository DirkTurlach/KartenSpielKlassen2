#include<iostream>
using namespace std;
#include "Karte.h"


//Karte::Karte(void)
//{
//}

//Karte::Karte(int kartenWert, char farbe[10],char kartenName[10], bool istGezogen,int kartenNummer)
//{
//	setKartenWert(kartenWert);
//	setFarbe(farbe);
//	setKartenName(kartenName);
//	setIstGezogen(istGezogen);
//	setKartenNummer(kartenNummer);
//}

void Karte::ausgabeKarte()
{
	cout << kartenWert << endl;
	cout << *farbe << endl;
	cout << *kartenName << endl;
}

void Karte::changeFarbe()
{
	strcpy(*farbe,"Pik");
}

void Karte::initKarteTest()
{
	kartenWert = 3;
	strcpy(*farbe,"Herz");
	strcpy(*kartenName,"drei");
}

//****************** Setter *****************************

void Karte::setKartenWert(int x)
{
	kartenWert = x;
}


//****************** Getter *****************************

int Karte::getKartenWert()
{
	return kartenWert;
}

//setFarbe(farbe);
//setKartenName(kartenName);
//setIstGezogen(istGezogen);
//setKartenNummer(kartenNummer);