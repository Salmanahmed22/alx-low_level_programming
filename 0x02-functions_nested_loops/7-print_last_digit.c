#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 *
 * @a: function parameter
 *
 * Return: always k
 */

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	return (k);
}
