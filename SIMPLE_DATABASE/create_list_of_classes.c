#include <stdlib.h>
#include <stddef.h>
#include "struct_list_of_classes.h"

CLASSES** create_list_of_classes(const size_t M)
{
	CLASSES** classes = (CLASSES**)malloc(M * sizeof(CLASSES*) + M * sizeof(CLASSES));
	CLASSES* start = (CLASSES*)((char*)classes + M * sizeof(CLASSES*));
	for(size_t i=0; i<M; ++i)
		classes[i] = start + i;
	
	return classes;
}
