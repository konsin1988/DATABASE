#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool in_range(char* buff, size_t max)
{
	size_t lb = strlen(buff), lm = max;
	return (lb < lm);  
}
