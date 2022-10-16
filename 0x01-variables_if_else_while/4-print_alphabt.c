#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		putchar(alpha);
		++alpha;
	}
	putchar('\n');
	return (0);
}
