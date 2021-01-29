#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

#include "struct_item.h"
#include "read_number.h"
#include "try_input_number.h"
#include "a_to_size.h"
#include "my_getch.h"
#include "create_array.h"

size_t N;

int main(int argc, char** argv)
{
	printf("Enter number of pupils: \n");
	read_number(&N);
	printf("\n%zu\n", N);
	ITEM pupils = create_array(N);

	
	return 0;
}
