# Update Integer Using Pointer

This program demonstrates how to update the value of an integer using a pointer in C. It includes a function `reset_to_98` that takes a pointer to an integer as a parameter and updates the value it points to to 98.

## Usage

To use this program, compile the `0-reset_to_98.c` and `0-main.c` files using the following command:
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
```

Then, run the resulting executable:

```c
./98
```

This will output the original value of the integer (402) and the updated value (98).

## Files

- `0-reset_to_98.c`: Contains the `reset_to_98` function that updates the value of an integer using a pointer.
- `0-main.c`: Contains a main function that demonstrates how to use the `reset_to_98` function.
- `main.h`: Contains the function prototype for the `reset_to_98` function.

## Example Output

```c
n=402
n=98
```

## Notes

- This program follows the Betty style guidelines for C code.
- The `main.h` header file is used to declare the function prototype and define any constants or macros that will be used in the program.


# swap_int

This function swaps the values of two integers using a temporary variable.

## Prototype:
void swap_int(int *a, int *b);
```
## Example:
```c
int a = 98;
int b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
```
## Output:
```c
a=98, b=42
a=42, b=98
```

# 3-puts.c
## _puts
This function prints a string followed by a new line to stdout.

Prototype
```c
void _puts(char *str);
```
## Description
The _puts function takes a pointer to a string as its argument and iterates through the string character by character, printing each character to stdout using the putchar function. It then prints a new line character to signal the end of the string.

## Arguments
str: A pointer to the string to be printed.
## Example
```c
char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);
```
## Output:

```c
I do not fear computers. I fear the lack of them - Isaac Asimov
```
## Additional Examples
Here are a few more examples of how the _puts function can be used:

```c
char *str1 = "Hello, world!";
_puts(str1);
char *str2 = "To be or not to be, that is the question.";
_puts(str2);
```
## Output:

```c
Hello, world!
```
## Error Handling
The _puts function does not have any error handling behavior. It is the responsibility of the caller to ensure that the pointer passed to the function is valid and points to a null-terminated string.

# 2-strlen.c
## _strlen function
The _strlen function returns the length of a null-terminated string.

## Prototype
```c
int _strlen(char *s);
Parameters
s: a pointer to a null-terminated string
```
## Return value
The length of the string, including the null terminator.

## Example
```c
#include <stdio.h>

int main(void)
{
    char *str = "My first strlen!";
    int len = _strlen(str);
    printf("%d\n", len);
    return 0;
}
```
## Output: 
```c
16
```
## Note
The standard library provides a similar function: strlen. Run man strlen to learn more.

