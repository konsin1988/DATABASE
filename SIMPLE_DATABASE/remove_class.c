#include <stdio.h>
#include <string.h>
#include "struct_list_of_classes.h"
#include "search_class.h"
#include "search_index_class.h"

int remove_class(char* arg, CLASSES** classes, size_t* m, char* filename)
{
	size_t index_remove;
	char command[20] = "rm files/";
	strcat(command, filename);
	system(command);
	search_index_class(arg, classes, *m, &index_remove);
	for(size_t i = index_remove; i<*m-1; ++i)
		*((*classes[i]).name) = *((*classes[i+1]).name);
	(*m)--;
	if(!search_class(arg, classes, *m, filename))
	{
		return 0;
	}
	else 
	{
		(*m)++;
		return 1;
	}
}
