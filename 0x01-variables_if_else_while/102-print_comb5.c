#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two two-digits numbers
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
		for (num2 = 1; num2 <= 99; num2++)
			if (num2 > num1)
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 + num2 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
