# `_memset()` function

This repository contains an implementation of the `_memset()` function in C.

## Function prototype

```c
char *_memset(char *s, char b, unsigned int n);
```

## Description

The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. It returns a pointer to the memory area `s`.

## Usage

To use the `_memset()` function, include the `main.h` header file in your source code:

```c
#include "main.h"
```

Then, you can call the `_memset()` function by passing it the memory area, the value to set, and the number of bytes to set:

```c
char *s = malloc(10);
_memset(s, 0, 10); // sets the first 10 bytes of s to 0
```


## Example

Here is an example program that uses the `_memset()` function:

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
char s[10] = "Hello";
printf("Before: %s\n", s);
_memset(s, 'X', 5);
printf("After: %s\n", s);
return 0;
}
```

This program will output the following:

```c
Before: Hello
After: XXXXX

```

## Note

The standard library provides a similar function called `memset()`. You can use `man memset` to learn more about it.

