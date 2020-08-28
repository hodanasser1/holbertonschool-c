#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
 * str_concat - check the code for Holberton School students.
 * @s1: str
 * @s2: str
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int count1 = 0;
	int count2 = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	count1 = _strlen_recursion(s1);
	count2 = _strlen_recursion(s2);
	result = (char *)malloc(sizeof(char) * (count1 + count2) + 1);

	for (i = 0; result != NULL && i < count1; i++)
	{
		result[i] = s1[i];
	}
	for (i = count1; result != NULL && i < (count1 + count2); i++)
	{
		result[i] = s2[i - count1];
	}
	return (result);
}


/**
* argstostr - prints a grid of integers
* @av: the address of the two dimensional grid
* @ac: height of the grid
*
* Return: Nothing.
*/
char *argstostr(int ac, char **av)
{

	int i;
	int len = 0;
	char *output;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		len += _strlen_recursion(av[i]);
	}
	output = (char *)malloc(sizeof(char) * (len + ac) + 1);
	for (i = 0; i < ac && av[i] != NULL && output != NULL; i++)
	{
		output = str_concat(output, av[i]);
		output = str_concat(output, "\n");
	}
	return (output);
}
