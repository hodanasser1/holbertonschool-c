#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(sizeof(char) *  size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
