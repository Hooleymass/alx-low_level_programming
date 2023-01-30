#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase using _putchar
 * _putchar should only be used twice
 * @letter use for loop
 *
 * exit(EXIT_SUCCESS)
 */

int main(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar("\n");
	return 0;
}

