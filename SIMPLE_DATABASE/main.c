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
#include "search_class.h"
#include "print_requires_more.h"
#include "print_too_long.h"
#include "add_class.h"
#include "save_classes.h"
#include "remove_class.h"

#define N 30	//Allocated memory
#define M 20

size_t n, m;	//Real number of items
char filename[10];

int main(int argc, char** argv)
{
	if(argc <= 1) printf("Syntax: \n\t%s --help \n" , argv[0]);
	else if(!strcmp(argv[1], "--help")) print_help(argv[0]);
	else if(!strcmp(argv[1], "--create"))
	{
		if(argc != 3) print_requires_more(argv[1]);
		else if(strlen(argv[2]) > 3) print_too_long(argv[1]);
		else
		{
			CLASSES** classes = create_list_of_classes(M);
			load_list_of_classes(classes, &m);
			if(search_class(argv[2], classes, m, filename))
			{
				printf("\n\t***Class %s is " 
				"already exists***\n\n", argv[2]);
			}
			else
			{
				if(!add_class(argv[2], classes, &m, filename))
				{
					printf("\n\t***Class %s "
				   "successfully created***\n\n",argv[2]);
				}
				else
					fprintf(stderr, 
					"\n\tCreation failed\n\n"); 
			}			
			save_classes(classes, m);
			free(classes);
		}

	}
	else if(!strcmp(argv[1], "--remove"))
	{
		if(argc != 3) print_requires_more(argv[1]);
		else if(strlen(argv[2]) > 3) print_too_long(argv[1]);
		else
		{
			CLASSES** classes = create_list_of_classes(M);
			load_list_of_classes(classes, &m);
			if(search_class(argv[2], classes, m, filename))
			{
				if(!remove_class(argv[2], 
				classes, &m, filename))
				{
					printf("\n\t***Class %s is " 
				"successfully remove***\n\n", argv[2]);
				}
				else
					printf("\n\t***Operation failed***");
			}
			else
			{
				printf("\n\t***Class %s "
				  "doesn't exist***\n\n",argv[2]);
			}
			save_classes(classes, m);
			free(classes);
		}

	}
	
	//else if(!strcmp(argv[1], "--print"))
	//{

	//}



	//ITEM** pupils = create_array(N);
	//CLASSES** classes = create_list_of_classes(M);
	//load_list_of_classes(classes, &m);	
	//print_all_items(pupils, N);
	//add_item(pupils, &N);
	//del_item(pupils, &N);
	//save_pupils(pupils, N);
	//load_pupils(pupils, N);
	//sort_pupils(pupils, N);

	
	return 0;
}
