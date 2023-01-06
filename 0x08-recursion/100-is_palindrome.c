#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string under consideration
 * Return: 1 if palindrome zero if not (bool)
 */

int is_palindrome(char *s)
{
	if (*s[i++] == *s[i--])
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (s + is_palindrome(s));
}
