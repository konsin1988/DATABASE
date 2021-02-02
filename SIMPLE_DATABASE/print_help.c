#include <stdio.h>

void print_help(char* ar)
{
	printf("Syntax: \n\t%s --create 'name': for creation class with name 'name'"
		"\n\t\t --rmcl 'name'\t: for remove class 'name' from database"
		"\n\t\t --print 'name'\t: for print all pupils from class 'name'"
		"\n\t\t --add 'name'\t: for addition new pupil in class 'name'"
		"\n\t\t --del 'name'\t: for deleting pupil from class 'name'\n", ar);
}
