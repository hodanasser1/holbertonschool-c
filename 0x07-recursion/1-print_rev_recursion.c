#include "holberton.h"

/**
 * _print_rev_recursion - print string recursive
 * @s: String to print
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
