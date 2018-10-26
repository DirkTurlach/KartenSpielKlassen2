#include<iostream>
using namespace std;
#include "Kartendeck.h"



void main()
{
	//Kartendeck deck;

	Kartendeck deck[52];

	deck->initKartendeck();	

	deck->ausgabeKarte();
}