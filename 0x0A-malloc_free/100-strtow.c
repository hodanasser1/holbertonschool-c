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
			c_arr[index]++;

		if (i != 0 && str[i] == ' ' && str[i-1] != ' ')
		{
			index++;
		}
	}
	return (result);
}

