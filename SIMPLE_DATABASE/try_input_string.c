#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "my_getch.h"
#include "a_to_size.h"
#include "in_range.h"

#define VK_ESCAPE      27
#define VK_RETURN      10
#define VK_BACKSPACE   127
#define BUFF_SIZE_U32  11
#define MAX_STR_VOLUME 20


void try_input_string(char* str)
{
	char key, buffer[BUFF_SIZE_U32] = {0};
	char* ptr = buffer;
	//memset(buffer, 0, sizeof(buffer));

	do
	{
		printf("\r%s", buffer); // print to konsole
		key = my_getch(); // enter next item 

		// number (0...9). Add to buffer on the right 
		// and check the range 
		if(key > 0x40 && key < 0x7B)
		{
			*ptr = key;
		      	if (in_range(buffer, MAX_STR_VOLUME)) ptr++;	// adding to buffer on the right
			else *ptr = 0;
			 // checking the range
		}
		// Press BACKSPACE
		else if (key == VK_BACKSPACE && ptr > buffer)
		{
			*--ptr = 0;
			printf("\b ");

		}

		else continue;
	}
	while (key != VK_RETURN);
	sscanf(buffer, "%s", str);
}
