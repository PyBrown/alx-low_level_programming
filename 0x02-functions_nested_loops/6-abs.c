#include "main.h"

/**
 * _abs - entry point
 * @n: integer to evaluate
 *
 * Description: computes the absolute value of an integer
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
	return (0);
}
