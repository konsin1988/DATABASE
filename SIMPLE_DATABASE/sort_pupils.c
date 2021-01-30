/* Function sorts array by lastname */

#include <stddef.h>
#include <stdio.h>
#include "struct_item.h"
#include <string.h>

void sort_pupils(ITEM** pupils, size_t N)
{
	ITEM tmp;

	for(size_t i=N-1; i>0; --i)
	{
		for(size_t j = 0; j<i; ++j) 
		{
			if(strcmp((*pupils[j]).lastname, (*pupils[j+1]).lastname) > 0)
			{
				tmp = *pupils[j];
				*pupils[i] = *pupils[j+1];
				*pupils[j+1] = tmp;
			}
		}
	}
}
