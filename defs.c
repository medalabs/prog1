#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"

void append(char* s, char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int get_short_name(char short_name[5] , char long_name[50])
{
	int i=0,j=1;
	char first_letter=long_name[0];
	append(short_name,first_letter);
	for (i=0;long_name[i] != '\0';i++)
	{
		if (long_name[i]==' ')
		{
			short_name[j]=long_name[i+1];
			j++;
		}
	}
	short_name[j]='\0';
	return SUCCESS;
}

int convert_id_to_string(char str_id[5],int id_conv)
{
	sprintf(str_id,"%d",id_conv);
	return SUCCESS;
}

int concatenate_two_words(char result[100],char sn[5],char str_id[5])
{
	strcpy(result,sn);
	strcat(result,str_id);
	return SUCCESS;
}