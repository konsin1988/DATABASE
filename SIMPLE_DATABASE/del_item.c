#include <stdio.h>
#include <stddef.h>
#include "struct_item.h"
#include "read_number.h"

void del_item(ITEM** pupils, size_t* N)
{
	size_t i_del;
	printf("Enter number to delete > \n");
	read_number(&i_del);
	if(i_del < 1 || i_del > *N)
	{
		fprintf(stderr, "There is no number %zu in pupils", i_del);
		return;
	}
	for(size_t i = i_del-1; i<*N-2; ++i)
		pupils[i] = pupils[i + 1];
	N--;
}
