class Karte
{
private:
	int		kartenWert;
	char	farbe[4][10];

public:
	
	char	kartenName[13][10];
	bool	istGezogen;
	int		kartenNummer;

	void ausgabeKarte();
	void changeFarbe();
	void initKarteTest();
	//Karte();
	//Karte(int, char*, char*, bool, int);

	void	setKartenWert(int);
	//void	setFarbe(char*);
	//void	setKartenName(char*);
	//void	setIstGezogen(bool);
	//void	setKartenNummer(int);

	int		getKartenWert();
	//char*	getFarbe();
	//char*	getKartenName();
	//bool	getIstGezogen();
	//int		getKartenNummer();
};

