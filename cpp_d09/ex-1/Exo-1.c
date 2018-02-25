//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Exo-1.h"

/* Initialisation */

static void CthulhuInitializer(cthulhu_t *this)
{
	this->m_power=42;
	this->m_name=strdup("Cthulhu");
}

static void KoalaInitializer(koala_t *this , char *_name , char _isALegend)
{
	this->m_parent = *NewCthulhu();
	this->m_isALegend = _isALegend;
	this->m_parent.m_name = strdup(_name);
	if (_isALegend == 0)
		this->m_parent.m_power = 0;
	else
		this->m_parent.m_power = 42;
}

/* Koala functions */

koala_t *NewKoala(char *name , char _isALegend)
{
	koala_t *koala = malloc(sizeof(koala));

	if (koala == NULL)
		return NULL;
	KoalaInitializer(koala, name, _isALegend);
	printf("Building %s\n", koala->m_parent.m_name);
	return koala;
}

void Eat(koala_t *this)
{
	this->m_parent.m_power += 42;
	printf("%s eats\n", this->m_parent.m_name);
}

/* Cthulu functions */

cthulhu_t *NewCthulhu()
{
	cthulhu_t *thulu = malloc(sizeof(thulu));

	CthulhuInitializer(thulu);
	printf("----\nBuilding %s\n", thulu->m_name);
	return thulu;
}

void PrintPower(cthulhu_t *this)
{
	printf("Power => %d\n", this->m_power);
}

void Attack(cthulhu_t *this)
{
	if (this->m_power >= 42) {
		this->m_power -= 42;
		printf("%s attacks and destroys the city\n", this->m_name);
	} else {
		printf("%s can't attack, he doesn't have enough power\n"
			, this->m_name);
	}
}

void Sleeping(cthulhu_t *this)
{
	this->m_power+=42000;
	printf("%s sleeps\n", this->m_name);
}