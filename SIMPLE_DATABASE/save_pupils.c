/* Function for saving array in file */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "struct_item.h"

void save_pupils(ITEM** pupils, size_t N)
{
	FILE *F;

	if((F = fopen("my_pupils.dat", "wt")) == NULL)
	{
		fprintf(stderr, "Unable to open 'my_pupils.dat'\n");
		return;
	}
	fprintf(F, "%zu", N);
	for(size_t i=0; i<N; ++i)
		fprintf(F, "%s\t%s\t%zu\n", (*pupils[i]).lastname, (*pupils[i]).firstname, (*pupils[i]).age);

	fclose(F);
}
