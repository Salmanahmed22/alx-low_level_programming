#include "main.h"

/**
 * puts2 -function prints char and skips a char
 * @str: function parameter
 *
 * Return: always 0
 */

void puts2(char *str)
{
	 int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
