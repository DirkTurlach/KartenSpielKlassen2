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

//****************** Setter *****************************

void Karte::setKartenWert(int kartenWert)
{
	Karte::kartenWert = kartenWert;
}

void Karte::setFarbe(char* farbe)
{
	strcpy(Karte::farbe, farbe);
}

void Karte::setKartenName(char* kartenName)
{
	strcpy(Karte::kartenName, kartenName);
}
//****************** Getter *****************************

int Karte::getKartenWert()
{
	return kartenWert;
}

char* Karte::getFarbe()
{
	return farbe;
}

char* Karte::getKartenName()
{
	return kartenName;
}
