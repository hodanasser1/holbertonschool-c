#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
 * print_strings - check the code for Holberton School students.
 * @separator: int
 * @num: int
 * @...: valist
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int num, ...)
{
	va_list valist;
	unsigned int i;

	if (num == 0)
		_putchar((char)'\n');

	/* initialize valist for num number of arguments */
	va_start(valist, num);

	/* access all the arguments assigned to valist */
	for (i = 0; i < num; i++)
	{
		char *a = va_arg(valist, char *);

		if (a != NULL)
		{
			_puts_recursion(a);
		}
		else
		{
			_puts_recursion((char *)"(nil)");
		}
		if ((i != num - 1) && (separator != NULL))
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
