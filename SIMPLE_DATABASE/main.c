#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

#include "struct_list_of_classes.h"
#include "struct_item.h"
#include "read_number.h"
#include "try_input_number.h"
#include "a_to_size.h"
#include "my_getch.h"
#include "create_array.h"
#include "print_all_items.h"
#include "read_string.h"
#include "try_input_string.h"
#include "in_range.h"
#include "add_item.h"
#include "del_item.h"
#include "save_pupils.h"
#include "load_pupils.h"
#include "sort_pupils.h"
#include "print_help.h"
#include "create_list_of_classes.h"
#include "load_list_of_classes.h"

#define N 30	//Allocated memory
#define M 20

size_t n, m;	//Real number of items

int main(int argc, char** argv)
{
	if(argc <= 1) 
	{
		printf("Syntax: \n\t%s --help \n" , argv[0]);
		return 0;
	}
	if(!strcmp(argv[1], "--help")) 
	{
		print_help(argv[0]);
		return 0;
	}

	ITEM** pupils = create_array(N);
	CLASSES** classes = create_list_of_classes(M);
	load_list_of_classes(classes, &m);	
	system("touch new_file.txt");	
	//print_all_items(pupils, N);
	//add_item(pupils, &N);
	//del_item(pupils, &N);
	//save_pupils(pupils, N);
	//load_pupils(pupils, N);
	//sort_pupils(pupils, N);

	
	return 0;
}
