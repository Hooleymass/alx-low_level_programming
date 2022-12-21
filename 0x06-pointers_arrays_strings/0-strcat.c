#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;
    char *src_ptr = src;

    /**
     * Find the end of the dest string
     */
    while (*dest_ptr != '\0')
        dest_ptr++;

    /** 
     * Append the src string to the dest string
     */
    while (*src_ptr != '\0')
    {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
    }

    /**
     * Add a null character to the end of the dest string
     */
    *dest_ptr = '\0';

    /**
     * Return a pointer to the beginning of the dest string
     */
    return dest;
}

