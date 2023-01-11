#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of size with char c
 * @size: unsigned int type
 * @c: char type to be created
 *
 * Return: return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
