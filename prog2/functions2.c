#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"

int* push_element(int tab[taille_tab],int a)
{
	int i=0;
	int* T;
	T=malloc(sizeof(int)*taille_tab);
	for (i = 0; i < taille_tab; i++)
	{
		T[i]=tab[i];
	}
	for (i = 0; i < taille_tab; i++)
	{
		if (T[i] > a)
		{
			T[i]=a;
			return T;
		}
	}
	return T;
}


int get_max(int tab[taille_tab])
{
	int i=0;int max=tab[0];
	for (i = 1; i < taille_tab; i++)
	{
		if (max < tab[i])
		{
			max=tab[i];
		}
	}
	return max;
}