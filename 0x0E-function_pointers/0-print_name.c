  
#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - function that print a name
 *@name: string pointer
 *@f: pointer
 *return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && *name != '\0' && f != 0)
		f(name);
}
