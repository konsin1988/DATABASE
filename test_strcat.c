#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char* a = malloc(10 * sizeof(char));
	char* b = malloc(10 * sizeof(char));
	scanf("%s", a);
	printf("%s\n", a);
	strcat(b, a);
	strcat(b, ".dat");
	printf("%s\n", b);
	return 0;
}
