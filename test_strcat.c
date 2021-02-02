#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv)
{
	struct glod
	{
		char* a;
		int b;
	} A;
	sscanf("glob", "%s", A.a);
	A.b = 20;
	printf("%s - %d", A.a, A.b);
	return 0;
}
