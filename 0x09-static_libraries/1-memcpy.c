#include "main.h"

/**
 * _memcpy - copies bytes from one memory area to another
 * @dest: memory area where n is to be copied to
 * @src: memory area where n is copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointr to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
