#include "main.h"

/**
 * _check_sqrt - checks if two numbers are root and square
 * @i: the root
 * @n: the square
 * Return: recursive checker
 */

int _check_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if ((n / 2) == i)
	{
		return (-1);
	}
	return (_check_sqrt((n + 1), i));
}

/**
 * _sqrt_recursion -  the natural square root of a number
 * @n: number under condideraton
 * Return: recursive square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_check_sqrt(n, i));
}
