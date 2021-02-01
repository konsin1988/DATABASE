#include <stdio.h>
#include <string.h>
#include "struct_list_of_classes.h"
#include "search_class.h"

int add_class(char* arg, CLASSES** classes, size_t* m, char* filename)
{
	char command[20] = "touch files/";
	strcat(command, filename);
	system(command);
	sscanf(arg, "%s ", (*classes[*m]).name);
	(*m)++;
	if(search_class(arg, classes, *m, filename))
	{
		return 0;
	}
	else 
	{
		(*m)--;
		return 1;
	}
}
