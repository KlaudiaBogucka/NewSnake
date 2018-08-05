#pragma once
#include "Plansza.h"
#include "conio.h"
class Snake : public Plansza
{
	int dlgOgona;
	int i;
	int kierunek;
	char* wskOgon = new char;
	char* wskGlowa = new char;

public:
	Snake()
		:kierunek(26)
	{}

	void start();
	void ruch(int kierunek, int ogonKolumna, int ogonWiersz, int glowaKolumna, int glowaWiersz);
};
	
