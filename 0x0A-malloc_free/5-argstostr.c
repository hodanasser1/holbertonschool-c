#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
		len += strlen(av[i]);
	}
	output = (char *)malloc(sizeof(char) * len + 1);
	for (i = 0; i < ac && av[i] != NULL && output != NULL; i++)
	{
		sprintf(output, "%s%s\n", output, av[i]);
	}
	return (output);
}
