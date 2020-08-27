#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: str
 * @s2: str
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1);

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
