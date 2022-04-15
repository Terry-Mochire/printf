#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_str - prints string 
*
* @c: pointer to string
*
* Return: length of string
*/

int print_str(char *c)
{
	int i;
	
	if (c == NULL)
		c = "(nil)";

	for (i = 0; *(c + i); i++)
	{
		_putchar(*(c + i));
	}
	return(i);
}
