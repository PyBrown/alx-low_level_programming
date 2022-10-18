#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints 10 times the alphabet,
 * in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
