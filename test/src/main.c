/**
 * @file   main.c
 * @author Andras Gerendas
 * @date   November, 2017
 * @brief  Tesztvaltozok/fuggvenyek helye
 * TODO: Kell valami tesztkornyezet hozza
 */

#include "hunc.h"
#include "hunio.h"

egesz
osszead (egesz a, egesz b)
{
	vissza a + b;
}

egesz
fo ()
{
	egesz x = 0;
	egesz meddig;
	egesz osszeg = 0;

	kerd("%d", &meddig);

	amig(x < meddig) {
		x++;
		ird("%d ", x);
		osszeg = osszead(osszeg, x);
	}

	ird("= %d", osszeg);

	vissza 0;
}
