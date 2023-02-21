#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabit 10x times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0 ; x < 10 ; x++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
