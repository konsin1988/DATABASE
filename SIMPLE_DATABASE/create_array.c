#include <stdlib.h>
#include <stddef.h>
#include "struct_item.h"

ITEM** create_array(size_t N)
{
	ITEM** pupils = (ITEM**)malloc(N * sizeof(ITEM*) + N * sizeof(ITEM));
	ITEM* start = (ITEM*)((char*)pupils + N * sizeof(ITEM*));
	for(size_t i=0; i<N; ++i)
		pupils[i] = start + i;
	
	return pupils;
}
