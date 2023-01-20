#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: name of the last parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list hooley;
	unsigned int i, sum;

	va_start(hooley, n);
	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(hooley, unsigned int);
	va_end(hooley);

	return (sum);
}
