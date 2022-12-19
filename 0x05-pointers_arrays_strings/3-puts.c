#include <stdio.h>

/**
 * 3-puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
  while (*str != '\0')
    {
      putchar(*str);
      str++;
    }
  putchar('\n');
}

