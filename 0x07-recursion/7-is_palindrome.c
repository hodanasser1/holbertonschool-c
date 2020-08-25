#include "holberton.h"

int is_palindrome(char *s)
{
	int len = recLen(s);

	return (palindrome(s, 0, len - 1));
}

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
