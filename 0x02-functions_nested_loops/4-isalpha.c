i#include "main.h"

/**
 * _isalpha -function checks if it is an alphabit
 *
 * @c: function parameter
 *
 * Return: 1 if is an alphabit else return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
