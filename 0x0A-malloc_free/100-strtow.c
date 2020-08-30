#include "holberton.h"

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
 * _strlen_recursion2 - print string recursive
 * @s: String to print
 *
 * Return: Always 0.
 */
int _strlen_recursion2(char *s)
{
	if (*s && s != ' ')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * _strdup2 - print string recursive
 * @str: String to print
 *
 * Return: Always 0.
 */
char *_strdup2(char *str)
{
	char *arr;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen_recursion2(str);
	arr = (char *)malloc(sizeof(char) * len + 1);
	for (i = 0; arr != NULL && i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}

/**
 * strtow - prints a grid of integers
 * @str: the address of the two dimensional grid
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
	int i = 0;
	int len = 0;
	int count = 0;
	int c_tmp = 0;
	int index = 0;
	int *c_arr = 0;
	char **result = NULL;

	if (str == NULL || str == (char *)"")
	{
		return (NULL);
	}
	len = _strlen_recursion(str);

	for (i = 0; i < len && str != NULL; i++)
	{
		if (i != 0 && str[i] == ' ' && str[i-1] != ' ')
		{
			count++;
		}

	}
	printf("count: %d", count);
	if (count != 0)
	{
		result = (char **)malloc(sizeof(char *) * count);
		c_arr = (int *)malloc(sizeof(int) * count);
	}

	for (i = 0; i < count && c_arr != NULL; i++)
		c_arr[i] = 0;
	for (i = 0; i < len && str != NULL; i++)
	{
		if (str[i] != ' ')
			c_arr[index] = _strlen_recursion2(*str[i]);

		if (i != 0 && str[i] == ' ' && str[i-1] != ' ')
		{
			index++;
		}
	}
	for (i = 0; i < count && c_arr != NULL; i++)
		printf("%d: %d", index, c_arr[index]);
	return (result);
}

