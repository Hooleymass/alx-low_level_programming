#include "main.h"
#include <stdio.h>

/**
 * set_string - main entry point
 * Description: Sets the value of a pointer to a char
 * @s: The pointer
 * @to: The char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
