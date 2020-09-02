#include "holberton.h"

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: string
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int len = recLen(s);

	return (palindrome(s, 0, len - 1));
}

/**
 * palindrome - check the code for Holberton School students.
 * @arr: string
 * @start: string
 * @end: string
 *
 * Return: Always 0.
 */
int palindrome(char *arr, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (arr[start] == arr[end])
	{
		return (palindrome(arr, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * recLen - check the code for Holberton School students.
 * @str: string
 *
 * Return: Always 0.
 */
int recLen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + recLen(str + 1));
	}
}
