#include "main.h"

/**
 * leet - Convert a string to leet speak.
 * @s: The string to convert.
 *
 * Return: A pointer to the converted string.
 */
char *leet(char *s)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        while (j < 5)
        {
            if (s[i] == "AEOTLaeotl"[j])
            {
                s[i] = "4307143071"[j];
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }

    return s;
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;
    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

