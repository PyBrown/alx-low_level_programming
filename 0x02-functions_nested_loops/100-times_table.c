#include "main.h"

/**
 * print_times_table - entry point
 * @n: number to generate times table
 *
 * Description: prints the n times table, starting with 0
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int product, i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				product = i * j;
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar(((product % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
