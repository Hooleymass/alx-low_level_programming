#include "main.h"

/**
 * leet - Convert a string to leet speak.
 * @s: The string to convert.
 *
 * Return: A pointer to the converted string.
 */
char *leet(char *s)
{
    // Initialize the index variables.
    int i = 0;
    int j = 0;

    // Iterate over each character in the string.
    while (s[i] != '\0')
    {
        // Iterate over each character in the leet alphabet.
        while (j < 5)
        {
            // Check if the current character in the string matches a character in the leet alphabet.
            if (s[i] == 'AEOTLaeotl'[j])
            {
                // If a match is found, replace the character in the string with the corresponding character in the leet alphabet.
                s[i] = '4307143071'[j];
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }

    return s;
}

/**
 * main - Test the leet function.
 *
 * Return: Always 0.
 */
int main(void)
{
    // Declare a string to convert.
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    // Declare a pointer to hold the converted string.
    char *p;

    // Convert the string.
    p = leet(s);
    // Print the converted string.
    printf("%s", p);
    // Print the original string for comparison.
    printf("%s", s);
    // Return 0 to indicate success.
    return (0);
}

