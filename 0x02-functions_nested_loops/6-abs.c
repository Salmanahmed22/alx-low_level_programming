#include "main.h"

/**
 * _abs -function prints the absolute value of a number
 *
 * @a: function parameter
 *
 * Return: always 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
