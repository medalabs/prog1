#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"


int tab1[taille_tab] = {47,38,5,89,1};
int tab2[taille_tab] = {2,14,38,90,96};

int main(int argc, char const *argv[])
{
	int* result;int i=0;
	result=push_element(tab2,get_max(tab1));
	for (i = 0; i < taille_tab; i++)
	{
		printf("%d\n", *(result+i));
	}
	free(result);
	return 0;
}