#include <stdlib.h>
#include <stddef.h>
#include "struct_item.h"

ITEM* create_array(size_t N)
{
	ITEM* pupils = malloc(N * sizeof(ITEM));
	return pupils;
}
