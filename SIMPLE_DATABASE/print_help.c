#include <stdio.h>

void print_help(char* ar)
{
	printf("Syntax: \n\t%s --create 'name': for creation database with name 'name'"
		"\n\t\t --print 'name'\t: for print all pupils from database 'name'"
		"\n\t\t --add 'name'\t: for addition new pupil in database 'nsme'"
		"\n\t\t --del 'name'\t: for deleting pupil from database 'name'\n", ar);
}
