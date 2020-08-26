#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * pr_int - print string recursive
 * @n: String to print
 *
 * Return: Always 0.
 */
void pr_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		pr_int(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * _puts_recursion - print string recursive
 * @s: String to print
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}


/**
 * print_numbers - check the code for Holberton School students.
 * @separator: int
 * @num: int
 * @...: valist
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int num, ...)
{
	if (num == 0)
		return;
	va_list valist;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(valist, num);

	/* access all the arguments assigned to valist */
	for (i = 0; i < num; i++)
	{
		pr_int((int)va_arg(valist, int));
		if ((i != num - 1) && separator != NULL)
		{
			_puts_recursion((char *)separator);
		}
		if (i == num - 1)
		{
			_putchar((char)'\n');
		}
	}

	/* clean memory reserved for valist */
	va_end(valist);
}
