#include<iostream>
using namespace std;
#include "Kartendeck.h"



void main()
{
	Kartendeck deck1;
	deck1.initKartendeck();

	deck1.k.getKartenWert();

	cout << deck1.k.getKartenWert() << endl;
}