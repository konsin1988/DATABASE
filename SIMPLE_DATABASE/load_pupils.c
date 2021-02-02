/* Function for reading data from file */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "struct_item.h"

void load_pupils(ITEM** pupils, size_t* n, char* filename)
{
	char file_class[25] = "files/";
	strcat(file_class, filename);
	
	FILE *F;

	if((F = fopen(file_class, "rt")) == NULL)
	{
		fprintf(stderr, "Unable to open '%s'\n", file_class);
		return;
	}
	fscanf(F, "%zu", n);
	for(size_t i=0; i<*n; ++i) {
		fscanf(F, "%s", &(*pupils[i]).lastname);
		fscanf(F, "%s", &(*pupils[i]).firstname);
		fscanf(F, "%zu", &(*pupils[i]).age);
	}
	fclose(F);
}
