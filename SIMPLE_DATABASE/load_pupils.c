/* Function for reading data from file */

#include <stdio.h>
#include <stddef.h>
#include "struct_item.h"

void load_pupils(ITEM** pupils, size_t N)
{
	FILE *F;

	if((F = fopen("my_pupils.dat", "rt")) == NULL)
	{
		fprintf(stderr, "Unable to open 'my_pupils.dat'\n");
		return;
	}
	fscanf(F, "%zu", &N);
	for(size_t i=0; i<N; ++i)
		fscanf(F, "%s %s %zu", (*pupils[i]).lastname, (*pupils[i]).firstname, (*pupils[i]).age);

	fclose(F);
}
