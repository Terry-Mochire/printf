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
	int a = n;

	if (n)
	{
		if (n < 0)
		{
			i += _putchar('-');
			a = -a;
		}

		if ((a / 10) > 0)
		{
			i += print_int(a / 10);
			i += _putchar((a % 10) + '0');
		}
		else
		{
			i += _putchar(n + '0');
		}
	}

	return (i);
}
