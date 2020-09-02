#include "holberton.h"

/**
 * is_prime_number - print string recursive
 * @n: int
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (checkForPrime(n, n / 2));
}

/**
 * checkForPrime - print string recursive
 * @n: int
 * @i: int
 *
 * Return: Always 0.
 */
int checkForPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i - 1;
		return (checkForPrime(n, i));
	}
}

