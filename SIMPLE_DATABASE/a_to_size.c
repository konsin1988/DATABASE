#include <inttypes.h>
#include <stdlib.h>
#include <stddef.h>

size_t a_to_size(char* s)
{
	size_t n = 0;
	for(size_t i = 0; s[i]>='0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;

}

