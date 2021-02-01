#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct_list_of_classes.h"

char* search_class(char* arg, CLASSES** classes, size_t m, char* filename)
{
	strcat(filename, arg);
	strcat(filename, ".dat");
	
	for(size_t i=0; i<m; ++i)
		if(!strcmp(arg, (*classes[i]).name))
		{
			return filename;
		}
	return NULL;
}

