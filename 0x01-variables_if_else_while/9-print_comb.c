#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers
 * of base 10 starting from 0,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
