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
	int num = 0;

	while (num <= 9)
	{
		putchar('%d', num);
		num++;
	}
	putchar('\n');
	return (0);
}
