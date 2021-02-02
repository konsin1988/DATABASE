/* Function sorts array by lastname */

#include <stddef.h>
#include <stdio.h>
#include "struct_item.h"
#include <string.h>

void sort_pupils(ITEM** pupils, size_t n)
{
	ITEM tmp;

	for(size_t i=n-1; i>0; --i)
	{
		for(size_t j = 0; j<i; ++j) 
		{
			if(strcmp((*pupils[j]).lastname, (*pupils[j+1]).lastname) > 0)
			{
				sscanf((*pupils[j]).lastname, 
					"%s", &tmp.lastname);
				sscanf((*pupils[j]).firstname, 
					"%s", &tmp.firstname);
				tmp.age = (*pupils[j]).age;
				
				sscanf((*pupils[j+1]).lastname,
					"%s", &(*pupils[j]).lastname);
				sscanf((*pupils[j+1]).firstname,
					"%s", &(*pupils[j]).firstname);
				(*pupils[j]).age = (*pupils[j+1]).age;
				
				sscanf(tmp.lastname, 
					"%s", &(*pupils[j+1]).lastname);
				sscanf(tmp.firstname, 
					"%s", &(*pupils[j+1]).firstname);
				(*pupils[j+1]).age = tmp.age;
			}
		}
	}
}
