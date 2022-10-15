#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print size of data types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %s byte(s)\n", sizeof(char));
	printf("Size of an int: %s byte(s)\n", sizeof(int));
	printf("Size of a long int: %s byte(s)\n", sizeof(long));
	printf("Size of a long long int: %s byte(s)\n", sizeof(long long));
	printf("Size of a float: %s byte(s)\n", sizeof(float));
	return (0);
}
