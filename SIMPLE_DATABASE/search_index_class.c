#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct_list_of_classes.h"

void search_index_class(char* arg, CLASSES** classes, size_t m, size_t* index_remove)
{
	for(size_t i=0; i<m; ++i)
		if(!strcmp(arg, (*classes[i]).name))
		{
			*index_remove = i;
		}
}

