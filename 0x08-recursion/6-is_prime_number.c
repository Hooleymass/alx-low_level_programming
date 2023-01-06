#include "main.h"

/**
 * check_prime - if the input integer is a prime number
 * @i: denumerator
 * @j: numerator
 * Return: 1 if prime number or 0 if not
 */

int check_prime(int i, int j)
{
	if ((j % 2) == 0)
	{
		return (0);
	}
	else if ((j / i) == j || (j /j) == 1)
	{
		return (1);
	}
	return (check_prime(i + 1, j));

}

/**
 * is_prime_number - if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime number or 0 if no
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		return (check_prime(2, n));
	}
}
