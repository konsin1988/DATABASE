#include <stdio.h>
#include <stddef.h>
#include "struct_item.h"
#include "read_number.h"
#include <string.h>
#include "search_pupil.h"

int del_item(char* arg, ITEM** pupils, size_t* n)
{
	size_t i_del;
	printf("\n >>> Enter number to delete:\n\t");
	read_number(&i_del);
	if(i_del < 1 || i_del > *n)
	{
		fprintf(stderr, "\n\t***There is no number %zu in %s***\n", i_del, arg);
		return 0;
	}
	char tmp_lastname[20];
       	char tmp_firstname[20];
	strcat(tmp_lastname, (*pupils[i_del - 1]).lastname);
	strcat(tmp_firstname, (*pupils[i_del - 1]).firstname);
	for(size_t i = i_del-1; i<*n-1; ++i) 
	{
		sscanf((*pupils[i+1]).lastname, 
			"%s", &(*pupils[i]).lastname);
		sscanf((*pupils[i+1]).firstname, 
			"%s", &(*pupils[i]).firstname);
		(*pupils[i]).age = (*pupils[i + 1]).age;
	}
	(*n)--;
	if(search_pupil(tmp_lastname, tmp_firstname, pupils, n)) return 0;
	else return 1;
}
