#include "main.h"

/**
 * _puts_recursion - prints a strng followed by a new line
 * @s: iterative string under consideration
 * Return: Success (0)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
