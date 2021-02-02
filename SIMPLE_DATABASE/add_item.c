#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "struct_item.h"
#include "read_string.h"
#include "read_number.h"

void add_item(ITEM** pupils, size_t* n)
{
	if(*n==29)
	{
		fprintf(stderr, "Can't add any element\n");
		return;
	}

	printf("\n\t>>Number of pupil is %zu:\n\n", *n+1);
	printf(">Enter lastname > \n");
	read_string(pupils[*n]->lastname);
	printf(">Enter firstname > \n");
	read_string(pupils[*n]->firstname);
	printf(">Enter age > \n");
	read_number(&pupils[*n]->age);

	(*n)++;
}


