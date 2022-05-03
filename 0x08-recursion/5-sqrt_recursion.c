#include <stdio.h>

/**
 * power_operation - returns the natural square root of a number
 * @n: number to calculate the square root of
 * 
 * Return: square root or -1
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (i*i > n)
		return (-1);
	if (i*i	== n)
		return (i);
	return (power_operation(n, i + 1));
}
