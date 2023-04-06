#include "main.h"

int _prime_number(int n, int r);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
 * _prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @r: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime_number(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (_prime_number(n, r - 1));
}
