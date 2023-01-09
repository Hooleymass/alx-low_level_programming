#include "main.h"
#include <stdio.h>

/**
 * _strchr - the function that locates a string
 * @c: character
 * @s: string to be locaredc
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != (char) c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
