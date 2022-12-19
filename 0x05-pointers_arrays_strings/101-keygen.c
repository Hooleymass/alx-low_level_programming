#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for the program 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 10
  int r = rand() % 10 + 1;

  // Generate a random password using the random number
  char password[9];
  sprintf(password, "%d%d%d%d%d%d%d%d", r, r + 1, r + 2, r + 3, r + 4, r + 5, r + 6, r + 7);

  // Print the password
  printf("%s\n", password);

  return (0);
}

