#include "stdafx.h"
#include "Plansza.h"

void Plansza::mapa(int ileKolumn, int ileWierszy)
{
	tab = new char*[ileKolumn];// Inicjalizujemy tablicê w tym miejscy, bo ju¿ znami iloœæ kolumn.
	
	for (int i = 0; i<ileKolumn; i++)
	{
		tab[i] = new char[ileWierszy];
	}

	for (int i = 0; i<ileKolumn; i++)
	{
		for (int j = 0; j<ileWierszy; j++)
		{
			tab[i][j] = ' ';
		}
	}
}

