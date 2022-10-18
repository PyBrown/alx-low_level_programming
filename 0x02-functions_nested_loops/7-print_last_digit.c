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
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (0);
}
