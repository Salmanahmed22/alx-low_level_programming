#include "main.h"
#include <stdio.h>

/**
 * print_sign -function checks if a number is +ve or -ve or zero
 *
 *@n: function parameter
 *
 * Return: 1 if +ve -1 if -ve 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
