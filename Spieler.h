#include "Kartendeck.h"

class Spieler
{
public:
	char name [10];
	Karte kartenAblage[26];
	int punktestand;
	int kartenImDeck;
//	int roudsWon;
public:
//	Spieler(void);
	void initSpieler();
//	void amZug();
	void karteGeben();
	void spielen();
//	void ausgabeSpielerpunkte();

};