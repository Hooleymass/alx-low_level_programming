#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random number and out put the last digit.
 * use 10 as a divisor of the random number to get the remender
 *
 * exit(EXIT_SUCCESS)
 */

int main(void)
{
	int n, last_digit; //creating a variables
	char las[] = "Last digit of";
	srand(time(0));  // this is setting the the initial numbers to 0
	n = rand() - RAND_MAX/2;
	last_digit = n % 10;

	if(last_digit > 5)
		printf("%s %i is %i and is greater than 5\n", las, n, last_digit);
	else if(last_digit == 0)
		printf("%s %i is %i and is 0\n", las, n, last_digit);
	else if(last_digit < 6 && last_digit == 0)
		printf("%s %i is %i and is less than 6 and not 0\n", las, n, last_digit);
	exit(EXIT_SUCCESS);
}
