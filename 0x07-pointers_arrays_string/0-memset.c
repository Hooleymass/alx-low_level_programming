#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the conatant
 * @b: constant
 * @n: maximum byte to use
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

