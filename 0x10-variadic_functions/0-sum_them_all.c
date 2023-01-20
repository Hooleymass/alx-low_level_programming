#include "variadic_functions.h"
/**
 * sum_them_all - return sum of all the parameters.
 * @n: name of the last parament
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list hooley;
	unsigned int i, sum;

	va_start(hooley, sum);
	sum = 0;

	if (n == 0)
	{
		return 0;
	}
	for (i = 0; i < n; i++)
		sum += va_arg(hooley, unsigned int);
	va_end(hooley);

	return sum;

}
