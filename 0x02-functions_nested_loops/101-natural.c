#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples
 *		of 3 or 5 below 1024 (excluded)
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (j = 0; j < 1024; ++j)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
			i += j;
	}
	printf("%d\n", i);
	return (0);
}
