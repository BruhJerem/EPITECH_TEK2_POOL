/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "String.h"

int main()
{
        String this;
	String str;
	char *s=strdup("Chancla");
	
        StringInit(&this, "Test");
	StringInit(&str, "Test2");
        printf("%s\n", this.str);
        StringDestroy(&this);
//	str.str=strdup("coucou");

	str.assign_s(&this, &str);
	// Regarde si str.str mis dans this.str
	printf("%s\n", this.str);
	printf("%s\n", str.str);

	StringInit(&this, "Test");
	this.assign_c(&this, s);
	// Regarde si s est bien remplie par this.str
	printf("%s\n", s);

// Append_s
	char *s1 = strdup("J'aime ");
	char *s2 = strdup("Epitech le sang");
	
	StringDestroy(&this);
	StringDestroy(&str);
	this.assign_c(&this, s1);
	this.assign_c(&str, s2);
	this.append_s(&this, &str);
	printf("Append_s : %s\n", this.str);

	// Append_c
	StringDestroy(&this);
	this.assign_c(&this, s1);
	this.append_c(&this, s2);
	printf("Append_c : %s\n", this.str);

	// at
	printf("Without error At : %c\n", this.at(&this, 5));
	printf("With error At : %d\n", this.at(&this, 99));

	// clear function
	this.clear(&this);
	printf("%s\n", this.str);

	// size
	this.assign_c(&this, s2);
	printf("SIZE : %s : %d\n", this.str, this.size(&this));

	//compare
	printf("Compare : %s = %s -> %d\n", this.str, this.str, this.compare_s(&this, &this));
	printf("Compare : %s = %s -> %d\n", this.str, s1, this.compare_c(&this, s1));

	//copy
	size_t copy_nb = this.copy(&this, s2, 4, 4);
	printf("Copy : %s -> %ld\n", s2, copy_nb);

	//c_str
	printf("String : %s\n", this.c_str(&this));

	//empty
	printf("Is empty ? : %d\n", this.empty(&this));

	//find
	StringInit(&str, "sang");
	printf("Find Struc: %s = %s -> %d\n", this.str, str.str, this.find_s(&this, &str, 3));
	printf("Find Struc: %s = %s -> %d\n", this.str, str.str, this.find_c(&this, str.c_str(&str), 3));
	// insert string
	printf("Insert string: %s + insert Issou -> ", this.str);
	this.insert_c(&this, 4, "Issou");
	printf("%s\n", this.str);

//string struct
	printf("Insert struct: %s + insert %s -> ", this.str, str.str);
	this.insert_s(&this, 50, &str);
	printf("%s\n", this.str);
	
//to int
	this.clear(&this);
	this.append_c(&this, "12345");
	printf("%d\n", this.to_int(&this));

	// split
	this.clear(&this);
	this.append_c(&this, "Achete kamas ou echange gelano");
//	char **tab = this.split_c(&this, ' ');
	String *t;
	t = this.split_s(&this, ' ');
/*	for(int i=0; tab[i]!= NULL; i++)
	printf("%s\n", tab[i]);*/
	for(int i=0; t[i].str!=NULL; i++)
		printf("%s\n", t[i].str);
//Afficher
	this.aff(&this);
	
	// Join
//	this.join_c(t, '-', tab);
	clear(t);
	t = this.split_s(&this, ' ');
	this.join_s(&this, '*', t);
	printf("\n========================\n");
	this.aff(&this);
	printf("\n========================\n");

	clear(&this);
	const char *tab2[3] = {"Cha","Caca, nzl", NULL};
	this.join_c(&this, '~', tab2);
	this.aff(&this);
	printf("\n========================\n");

	//substr
	String *e;
	clear(&this);
	StringDestroy(&this);
	StringInit(&this, "Recrute Kanigloud");
	printf("%s\n", this.str);
	e = this.substr(&this, -2, 10);
	this.aff(e);
	(void)e;
	printf("\n========================\n");
	
	// Free tout à la fin
	free(s);
}
