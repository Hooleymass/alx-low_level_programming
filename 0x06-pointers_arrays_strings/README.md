# 0x06. C - More pointers, arrays and strings

This repository contains code examples and exercises on the topic of pointers, arrays, and strings in C programming. The code is intended to be used as a learning resource for understanding these concepts and how to work with them in C.

## Technologies

- C programming language

## Contents

- Code examples demonstrating the use of pointers, arrays, and strings in C
- Exercises with solutions for practicing these concepts
- A `README.md` file with instructions and explanations

## Usage

To run the code examples, you will need a C compiler. You can use the `gcc` compiler on Linux or macOS, or the Visual C++ compiler on Windows.

To compile and run a C program, you can use the following command:

```c
gcc program.c -o program
```
```c
./program
```

Replace `program.c` with the name of your C source file and `program` with the name of the executable file you want to create.

## Resources

- [The C Programming Language](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628) - A classic textbook on C programming
- [Pointers and Memory in C](https://www.tutorialspoint.com/cprogramming/c_pointers.htm) - An online tutorial on pointers and memory in C
- [Arrays in C](https://www.tutorialspoint.com/cprogramming/c_arrays.htm) - An online tutorial on arrays in C
- [Strings in C](https://www.tutorialspoint.com/cprogramming/c_strings.htm) - An online tutorial on strings in C

# 0x06. C - More pointers, arrays and strings

This repository contains code examples and exercises on the topic of pointers, arrays, and strings in C programming. The code is intended to be used as a learning resource for understanding these concepts and how to work with them in C.

## File: 0-strcat.c

This file contains a function called `_strcat` that concatenates two strings. The function has the following prototype:

```c
char *_strcat(char *dest, char *src);
```

The function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. The function returns a pointer to the resulting string `dest`.

Here is an example of how to use the `_strcat` function:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;
printf("%s\n", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
```

The output of this program will be:

```c
Hello
World!
Hello World!
World!
Hello World!
```

## Other files and resources

- `0-main.c`: A main file that demonstrates how to use the `_strcat` function
- `main.h`: A header file containing the prototype for the `_strcat` function

## Requirements and dependencies

To compile and run the code in this repository, you will need a C compiler. You can use the `gcc` compiler on Linux or macOS, or the Visual C++ compiler on Windows.

To compile and run a C program


## Build and run instructions
To build and run the code in this repository, you can use the following steps:

Clone the repository to your local machine using git:

```c
git clone https://github.com/hooleymass/alx-low_level_programming.git
```
Navigate to the directory containing the code:

```c
cd 0x06-pointers_arrays_strings
```
Compile the code using the gcc compiler:
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
```
This will create an executable file named `0-strcat` that you can run to test the `_strcat` function.

Run the executable file:
```c
./0-strcat
```

This will execute the code in the `0-main.c` file, which demonstrates how to use the `_strcat` function.


## Example output
Here is the example output you should see when you run the `0-strcat` executable file:

```c
Hello 
World!
Hello World!
World!
Hello World!
```

## Additional resources
•[strcat function](https://www.tutorialspoint.com/c_standard_library/c_function_strcat.htm) - An online tutorial on the `strcat` function from the C standard library

•[C Strings and String Functions](https://www.tutorialspoint.com/cprogramming/c_strings.htm) - An online tutorial on strings and string functions in C


