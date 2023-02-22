#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	int i:
	int sum;

	sum = 0;

	for (i = 1 ; i <= 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	prinntf("%d\n", sum);
	return (0);
}
