#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen_recursion - print string recursive
 * @s: String to print
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}


/**
 * print_all - check the code for Holberton School students.
 * @format: int
 * @...: valist
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0;
	unsigned int num = _strlen_recursion((char *)format);
	char *a;
	int valid;

	/* initialize valist for num number of arguments */
	va_start(valist, num);
	/* access all the arguments assigned to valist */
	while (i < num)
	{
		valid = 1;
		switch (format[i])
		{
		case 's':
			a = va_arg(valist, char *);
			printf("%s", a != NULL ? a : (char *)"(nil)");
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		default:
			valid = 0;
			break;
		}
		if (valid && (i != num - 1))
		{
			printf(", ");
		}
		i++;
	}
	_putchar((char)'\n');
	va_end(valist);
}

