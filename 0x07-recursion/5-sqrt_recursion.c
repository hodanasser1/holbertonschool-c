#include "holberton.h"

/**
 * _sqrt_recursion - print string recursive
 * @x: int
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	return (sqrtSearch(0, x, x));
}

/**
 * sqrtSearch - print string recursive
 * @low: int
 * @high: int
 * @num: int
 *
 * Return: Always 0.
 */

int sqrtSearch(int low, int high, int num)
{
	if (low <= high)
	{
		long int mid = (low + high) / 2;


		if (mid * mid == num)
		{
			return (mid);
		}
		else if (mid * mid < num)
		{
			return (sqrtSearch(mid + 1, high, num));
		}
		else
		{
			return (sqrtSearch(low, mid - 1, num));
		}
	}
	return (-1);
}
