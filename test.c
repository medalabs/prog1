#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"


#define SUCCESS 0

char nom[]="mahmoud ben ayed";
int id=1234;

int main()
{
	char sn[]="";
	char str_id[5];
	char result[100]="";
	get_short_name(sn,nom);
	convert_id_to_string(str_id,id);
	concatenate_two_words(result,sn,str_id);
	printf("%s\n",result);
	return 0;
}

