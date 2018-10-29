#include<iostream>
using namespace std;
#include "Spieler.h"

void main()
{
	Kartendeck d1;	

	d1.initKartendeck();	
	d1.mischen();
	d1.ausgabe();
	
	Spieler s[2];

	s[0].kartenImDeck=0;
	s[1].kartenImDeck=0;
	s[0].punktestand=0;
	s[1].punktestand=0;



for (int i=0; i<2;i++)
	{
		s[0].karteGeben ();

		cout << "Spieler:1   " << s[0].name << endl;
		cout << "Aktuelle Karte: " << "\t" << s[0].kartenAblage[(s[0].kartenImDeck)-1].farbe << "\t" << s[0].kartenAblage[(s[0].kartenImDeck)-1].kartenName << "\t" << s[0].kartenAblage[(s[0].kartenImDeck)-1].kartenWert << endl;
		//cout << "Gesamtpunktzahl?: " << s[0].punktestand<< endl<<endl;

		s[1].karteGeben ();
			
		cout << "Spieler:2   " << s[1].name << endl;
		cout << "Aktuelle Karte: " << "\t" << s[1].kartenAblage[(s[1].kartenImDeck)-1].farbe << "\t" << s[1].kartenAblage[(s[1].kartenImDeck)-1].kartenName << "\t" << s[1].kartenAblage[(s[1].kartenImDeck)-1].kartenWert << endl;
		//cout << "Gesamtpunktzahl?: " << s[1].punktestand<< endl<<endl;
	}
}