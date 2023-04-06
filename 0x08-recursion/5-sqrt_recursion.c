#include "main.h"

int _square(int n, int r);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_square(n, 0));
}

/**
 * _square - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @r: iterator
 *
 * Return: the resulting square root
 */
int _square(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_square(n, r + 1));
}
