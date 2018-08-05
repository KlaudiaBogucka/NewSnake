#include "stdafx.h"
#include "Snake.h"

void Snake::start()
{
	int ogonKolumna = 2, ogonWiersz = 3, glowaKolumna = 5, glowaWiersz = 3;


	wskOgon = &tab[ogonKolumna][ogonWiersz];
	wskGlowa = &tab[glowaKolumna][glowaWiersz];

	for (i = ogonKolumna; i<glowaKolumna; i++)
		tab[ogonKolumna][ogonWiersz] = 'o';

	tab[glowaKolumna][glowaWiersz] = '@';
	ruch(kierunek, ogonKolumna, ogonWiersz, glowaKolumna, glowaWiersz);//na poczatku w prawo

}
void Snake::ruch(int kierunek, int ogonKolumna, int ogonWiersz, int glowaKolumna, int glowaWiersz)
{
	if (kierunek == 24) //gora
	{
		do
		{
			*wskOgon = ' ';
			ogonKolumna++;
			wskOgon = &tab[ogonKolumna][ogonWiersz];
			*wskGlowa = 'o';
			glowaWiersz++;
			wskGlowa = &tab[glowaKolumna][glowaWiersz];
			*wskGlowa = '@';
		} while (_kbhit()); //dopoki nie wpisze znaku
	}
	else if (kierunek == 25)//dol
	{
		do
		{
			*wskOgon = ' ';
			ogonKolumna++;
			wskOgon = &tab[ogonKolumna][ogonWiersz];
			*wskGlowa = 'o';
			glowaWiersz--;
			wskGlowa = &tab[glowaKolumna][glowaWiersz];
			*wskGlowa = '@';
		} while (_kbhit());
	}
	else if (kierunek == 26)//prawo
	{
		do
		{
			*wskOgon = ' ';
			ogonKolumna++;
			wskOgon = &tab[ogonKolumna][ogonWiersz];
			*wskGlowa = 'o';
			glowaKolumna++;
			wskGlowa = &tab[glowaKolumna][glowaWiersz];
			*wskGlowa = '@';
		} while (_kbhit());
	}
	else if (kierunek == 27)//lewo
	{
		do
		{
			*wskOgon = ' ';
			ogonKolumna++;
			wskOgon = &tab[ogonKolumna][ogonWiersz];
			*wskGlowa = 'o';
			glowaKolumna--;
			wskGlowa = &tab[glowaKolumna][glowaWiersz];
			*wskGlowa = '@';
		} while (_kbhit());
	}

	while (_kbhit())
	{
		kierunek = _getch();

		return ruch(kierunek, ogonKolumna, ogonWiersz, glowaKolumna, glowaWiersz);
	}

}

