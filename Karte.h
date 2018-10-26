class Karte
{
private:
	int		kartenWert;
	char	farbe[4][10];
	char	kartenName[13][10];
	bool	istGezogen;
	int		kartenNummer;

public:

	//Karte();
	//Karte(int, char*, char*, bool, int);

	void	setKartenWert(int);
	void	setFarbe(char*);
	void	setKartenName(char*);
	//void	setIstGezogen(bool);
	//void	setKartenNummer(int);

	int		getKartenWert();
	char*	getFarbe();
	char*	getKartenName();
	//bool	getIstGezogen();
	//int		getKartenNummer();
};

