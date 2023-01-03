#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: a pointer to the beginning of the located substring
 * if substring is located else return Null
 */

char *_strstr(char *haystack, char *needle)
{
	int hooley;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		hooley = 0;

		if (haystack[hooley] == needle[hooley])
		{
			do {
				if (needle[hooley + 1] == '\0')
					return (haystack);
				hooley++;

			} while (haystack[hooley] == needle[hooley]);
		}
		haystack++;
	}
	return ('\0');
}

