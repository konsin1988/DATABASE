#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "struct_item.h"
#include "read_string.h"
#include "read_number.h"

void add_item(ITEM** pupils, size_t* N)
{
	if(*N==19)
	{
		fprintf(stderr, "Can't add any element\n");
		return;
	}

	printf("Number of pupil is %zu\n\n", *N);
	printf("Enter lastname > \n");
	read_string((*pupils[*N-1]).lastname);
	printf("Enter firstname > \n");
	read_string((*pupils[*N-1]).firstname);
	printf("Enter age > \n");
	read_number(&(*pupils[*N-1]).age);

	(*N)++;
}


