#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	scanf("%d", &n);

	if(n > 0)
		printf("n is positive\n");
	else if(n == 0)
		printf("n is zero");
	else if(n < 0)
		printf("n is negative");
	exit(EXIT_SUCCESS);
}

