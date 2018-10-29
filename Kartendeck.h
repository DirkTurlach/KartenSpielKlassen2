#include "Karte.h"

class Kartendeck
{
public:
	Karte k[52];
	int aktuelleKarte;
	
	void initKartendeck();	
	void ausgabe();
	void mischen();
};



