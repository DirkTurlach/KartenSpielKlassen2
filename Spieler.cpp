#include <iostream>
using namespace std;
#include "Spieler.h"


void Spieler::karteGeben()
{
	kartenAblage[kartenImDeck] = Kartendeck.k;
	k[aktuelleKarte].isGezogen = false;
	(Spieler.punktestand) += (k[aktuelleKarte].wert);

	kartenImDeck++;
	aktuelleKarte++;
}

//void Spieler::ausgabeSpielerpunkte()
//{
//
//}