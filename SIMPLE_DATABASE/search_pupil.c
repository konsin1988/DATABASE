#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct_item.h"

int search_pupil(char* lastname, char* firstname, ITEM** pupils, size_t* n)
{
	for(size_t i=0; i<*n; ++i)
		if(!strcmp(lastname, (*pupils[i]).lastname) && !strcmp(firstname, (*pupils[i]).lastname))
		{
			return 1;
		}
	return 0;
}

