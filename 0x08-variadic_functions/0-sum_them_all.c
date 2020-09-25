#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code for Holberton School students.
 * @num: int
 * @...: valist
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int num, ...)
{
	va_list valist;
	double sum = 0.0;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(valist, num);

	/* access all the arguments assigned to valist */
	for (i = 0; i < num; i++)
	{
		sum += va_arg(valist, int);
	}

	/* clean memory reserved for valist */
	va_end(valist);

	return (sum);
}
