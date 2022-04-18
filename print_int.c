#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_int - print int numbers
*
* @n: integer number
*
* Return: length
*/

int print_int(int n)
{
	int i = 0;

	if (n)
	{
		if (n < 0)
		{
			i += _putchar('-');
		}	
		if ((n / 10) > 0)
		{
			i += print_int(n / 10); 
			i += _putchar((n % 10) + '0');
		}
		else
		{
			i += _putchar(n + '0');
		}
	}	
	return (i);
}
