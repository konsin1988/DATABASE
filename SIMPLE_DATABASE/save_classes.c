/* Function for saving array in files */

#include <stdio.h>
#include <stddef.h>
#include "struct_list_of_classes.h"

void save_classes(CLASSES** classes, size_t m)
{
	FILE *F;

	if((F = fopen("files/list_of_classes.dat", "wt")) == NULL)
	{
		fprintf(stderr, "Unable to open 'list_of_classes.dat'\n");
		return;
	}
	fprintf(F, "%zu\n", m);
	for(size_t i=0; i<m; ++i)
		fprintf(F, "%s\n", (*classes[i]).name);
	fclose(F);
}

