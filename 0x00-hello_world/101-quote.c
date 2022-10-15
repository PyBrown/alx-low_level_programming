#include <unistd.h>

/**
 * main - entrey point
 *
 * Description: print text to standard error
 * followed by new line
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
