#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - print string recursive
 * @s: String to print
 *
 * Return: Always 0.
 */
uint64_t _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * _strdup - print string recursive
 * @str: String to print
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *arr;
	uint64_t i = 0;
	uint64_t len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen_recursion(str);
	arr = (char *)malloc(sizeof(char) * len);
	for (i = 0; arr != NULL && i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
