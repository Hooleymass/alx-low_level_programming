#include "main.h"

/**
 * _puts_recursion prints a string followed by a new line
 *
 * return: Success (0)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		put_recursion(s + 1);
	}
	else
	{
		putchar('\n')
	}
}

