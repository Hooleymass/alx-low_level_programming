#include "main.h"

/**
 * factorial - a recursive decrement multplication
 * @n: number to be factorialed
 * Return: the factorial to be recursed
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
