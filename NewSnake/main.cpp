// NewSnake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Plansza.h"
#include "Snake.h"

int main()
{
	Snake s;
	s.mapa(15, 16);
	s.start();

	return 0;
}

