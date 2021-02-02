/* Function for saving array in file */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "struct_item.h"

void save_pupils(ITEM** pupils, size_t n, char* filename)
{
	char file_class[15] = "files/";
	strcat(file_class, filename);
	
	FILE *F;

	if((F = fopen(file_class, "wt")) == NULL)
	{
		fprintf(stderr, "Unable to open '%s'\n", file_class);
		return;
	}
	fprintf(F, "%zu\n", n);
	for(size_t i=0; i<n; ++i)
		fprintf(F, "%s %s %zu\n", (*pupils[i]).lastname, (*pupils[i]).firstname, (*pupils[i]).age);

	fclose(F);
}
