#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>
#include "struct_item.h"

void print_all_items(ITEM** pupils, size_t n)
{
	printf("\n N lastname            firstname               age\n");
	for(size_t i=0; i<n; ++i)
		printf("%2i. %-20s %-20s %3zu\n", i+1, (*pupils[i]).lastname, 
		(*pupils[i]).firstname, (*pupils[i]).age);
	printf("\n");

}
