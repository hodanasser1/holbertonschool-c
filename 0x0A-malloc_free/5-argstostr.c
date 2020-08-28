#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/*
* argstostr - prints a grid of integers
* @av: the address of the two dimensional grid
* @ac: height of the grid
*
* Return: Nothing.
*/

char *argstostr(int ac, char **av)
{

	int i;

	for (i = 0; i < ac; i++)
{
	printf("%s\n", av[i]);
}
	return (0);
}
