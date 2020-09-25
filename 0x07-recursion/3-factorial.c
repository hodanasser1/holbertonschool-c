#include "holberton.h"

/**
 * factorial - print string recursive
 * @i: String to print
 *
 * Return: Always 0.
 */
int factorial(int i)
{
	if (i < 0)
	{
		return (-1);

	}
	if (i == 0)
	{
		return (1);
	}
	return (i * (factorial(i - 1)));
}
