#include "main.h"

/**
 * print_last_digit - entry point
 * @n: the number to evaluate
 *
 * Description: prints the last digit of a number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int m

	m = n % 10;

	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
