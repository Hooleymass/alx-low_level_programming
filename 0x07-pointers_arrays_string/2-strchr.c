#include "main.h"
#include <stdio.h>

/**
 * _strchr - it locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: a pointer to the fiest ocourence if c is found
 * Null if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

