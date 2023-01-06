#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: coefficient
 * @y: power raised to
 * Return: value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y));
	}
}
