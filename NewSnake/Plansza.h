#pragma once

class Plansza
{
public:
	int ileKolumn, ileWierszy;
	Plansza()
		:ileKolumn(0),
		ileWierszy(0)
	{}
	char** tab = nullptr;
	void mapa(int ileKolumn, int ileWierszy);
};