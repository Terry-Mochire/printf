#include "main.h"
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

	for(i = 0; *(c + i); i++)
	{
		if(*(c + i) != '/0')
			_putchar(*(c + i);
	}
	return(i);
}
