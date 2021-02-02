/* Function for loading list of all classes from file 'list_of_classes.dat'*/

#include <stdio.h>
#include <stddef.h>
#include "struct_list_of_classes.h"

void load_list_of_classes(CLASSES** classes, size_t* m)
{
	FILE *F;

	if((F = fopen("files/list_of_classes.dat", "rt")) == NULL)
	{
		fprintf(stderr, "Unable to open 'list_of_classes.dat'\n");
		return;
	}
	fscanf(F, "%zu", m);
	for(size_t i=0; i<*m; ++i)
		fscanf(F, "%s", (*classes[i]).name);

	fclose(F);
}
