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
  srand(time(NULL));
  int r = rand() % 10 + 1;
  char password[9];
  sprintf(password, "%d%d%d%d%d%d%d%d", r, r + 1, r + 2, r + 3, r + 4, r + 5, r + 6, r + 7);

  printf("%s\n", password);

  return (0);
}

