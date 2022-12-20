# Pointers, Arrays, and Strings in C
This project covers the concepts of pointers, arrays, and strings in C programming. These concepts are fundamental to C and are essential for understanding how to manipulate and manipulate data in C.

## Pointers
In C, pointers are variables that hold the memory address of another variable. They allow you to manipulate the value stored at that memory location directly, rather than indirectly through the original variable. To use pointers, you must first declare a pointer variable with the `*` operator. For example:

```c
int *ptr;
```
To assign a pointer the address of a variable, you can use the `&` operator. For example:

```c
int n = 5;
int *ptr = &n;
```
To access the value stored at the address pointed to by a pointer, you can use the `*` operator. For example:

```c
int n = 5;
int *ptr = &n;
int m = *ptr;  // m is now 5
```
## Arrays
Arrays are a type of data structure that allows you to store multiple values of the same type in a contiguous block of memory. They are declared with the type and size of the array, followed by the array name. For example:

```c
int arr[10];  // Declares an array of 10 integers
```
To access an element of an array, you can use the array name followed by the index of the element in square brackets. For example:

```c
int arr[10];
arr[0] = 5;  // Sets the first element of the array to 5
int x = arr[0];  // x is now 5
```
## Strings
Strings are sequences of characters in C and are represented as arrays of characters. They are terminated with a null character `'\0'`, which indicates the end of the string. To declare a string, you can use the following syntax:

```c
char str[10];  // Declares a string of 10 characters
```
To initialize a string with a specific value, you can use the following syntax:

```c
char str[10] = "Hello";  // Initializes the string with the value "Hello"
```
You can manipulate strings using various string functions, such as `strcpy` to copy one string to another, `strlen` to get the length of a string, `strcat` to concatenate two strings, etc. You can also use the `%s` format specifier in the `printf` function to print a string.

## Scope of Variables
The scope of a variable refers to the visibility and accessibility of the variable within a specific block of code. In C, variables can have either local or global scope. Local variables are defined within a function or block of code and are only accessible within that block of code. Global variables are defined outside of any function and are accessible from any function in the program.

It is important to be aware of the scope of variables when writing code, as it can affect the behavior and readability of your program. It is generally a good practice to limit the scope of variables as much as possible to reduce the risk of conflicts and unintended side effects.

## Resources


To continue learning about pointers, arrays, and strings in C, you can refer to the following resources:

• The C Programming Language by Brian Kernighan and Dennis Ritchie is a classic textbook that covers these topics in depth.

• The C FAQ is a comprehensive resource that answers common questions about C programming, including pointers, arrays, and strings.

• The C Programming tutorial on Tutorials Point is a good resource for learning about these topics with examples.

It is also important to practice implementing these concepts in your own code to solidify your understanding. You can find exercises and challenges online or come up with your own to practice using pointers, arrays, and strings in C.

Finally, it is always a good idea to refer to the documentation of the functions you are using to understand their behavior and any potential pitfalls. It is also important to ensure that your code is readable, well-documented, and follows good coding practices. Plagiarism, which is the act of copying someone else's work and claiming it as your own, is strictly prohibited and can have serious consequences. It is important to write your own code and understand the concepts being implemented in order to fully benefit from this project.


## Plagiarism
It is important to write your own code and understand the concepts being implemented in order to fully benefit from this project. Plagiarism, which is the act of copying someone else's work and claiming it as your own, is strictly prohibited and can have serious consequences


## Examples
Here are some examples of how to use pointers, arrays, and strings in C:

##Pointers
```c
#include <stdio.h>

void increment(int *x)
{
    *x += 1;
}

int main(void)
{
    int n = 5;
    printf("n = %d\n", n);  // prints "n = 5"
    increment(&n);
    printf("n = %d\n", n);  // prints "n = 6"
    return 0;
}

```
This example shows how to use a pointer to modify the value of a variable. The `increment` function takes a pointer to an `int` as an argument and `increments` the value pointed to by the pointer. When we call the `increment` function with the address of the `n` variable using the `&` operator, the value of `n` is incremented by 1.

Arrays
```c
#include <stdio.h>

int main(void)
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        arr[i] = i * 2;
    }

    for (i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

```
This example shows how to use an array to store and access multiple values. We use a loop to initialize the elements of the `arr` array with values that are double the index of the element. We then use another loop to print the values of the elements in the array. The output of this program would be:

```c
arr[0] = 0
arr[1] = 2
arr[2] = 4
arr[3] = 6
arr[4] = 8
arr[5] = 10
arr[6] = 12
arr[7] = 14
arr[8] = 16
arr[9] = 18
```
## Strings
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10] = "Hello";
    int len = strlen(str);
    printf("The length of the string is %d\n", len);  // prints "The length of the string is 5"
    return 0;
}

```
This example shows how to use a string in C. We declare a string `str` with the value `"Hello"` and use the strlen function from the `string.h` library to get the length of the string. We then print the length of the string using the printf function.

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    strcat(str1, str2);
    printf("The concatenated string is %s\n", str1);  // prints "The concatenated string is HelloWorld"
    return 0;
}

```
This example shows how to use the `strcat` function from the `string.h` library to concatenate two strings. We declare two strings `str1` and `str2` with the values `"Hello"` and `"World"`, respectively. We then use the `strcat` function to append `str2` to the end of `str1`. Finally, we print the concatenated string using the `printf` function.

## Conclusion
Pointers, arrays, and strings are important concepts in C programming and are used to manipulate and manipulate data. Understanding how to use these concepts can help you write more efficient and effective code in C.



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
This function prints a string followed by a new line to `stdout`.

Prototype
```c
void _puts(char *str);
```
## Description
The _puts function takes a pointer to a string as its argument and iterates through the string character by character, printing each character to stdout using the putchar function. It then prints a new line character to signal the end of the string.

## Arguments
`str`: A pointer to the string to be printed.
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
The `_puts` function does not have any error handling behavior. It is the responsibility of the caller to ensure that the pointer passed to the function is valid and points to a null-terminated string.

# 2-strlen.c
## _strlen function
The `_strlen` function returns the length of a null-terminated string.

## Prototype
```c
int _strlen(char *s);
```
## Parameters
`s`: a pointer to a null-terminated string

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
The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

