#include <stdio.h>

/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
