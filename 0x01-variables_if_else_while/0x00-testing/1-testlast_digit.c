#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int randomNumber = rand();
    int lastDigit = randomNumber % 10;
    printf("The last digit of the random number is: %d\n", lastDigit);
    return 0;
}

