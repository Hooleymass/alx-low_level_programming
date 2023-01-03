# 0x07-pointers_arrays_strings

# 0-memset.c
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


# `_memcpy()` function

This repository contains an implementation of the `_memcpy()` function in C.

## Function prototype

```c
char *_memcpy(char *dest, char *src, unsigned int n);
```


## Description

The `_memcpy()` function copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`. It returns a pointer to the memory area `dest`.

## Usage

To use the `_memcpy()` function, include the `main.h` header file in your source code:

```c
#include "main.h"
```

Then, you can call the `_memcpy()` function by passing it the destination memory area, the source memory area, and the number of bytes to copy:

```c
char *dest = malloc(10);
char *src = "Hello";
_memcpy(dest, src, 5); // copies the first 5 bytes of src to dest

```

## Example

Here is an example program that uses the `_memcpy()` function:

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    char dest[10] = "XXXXX";
    char *src = "Hello";
    printf("Before: %s\n", dest);
    _memcpy(dest, src, 5);
    printf("After: %s\n", dest);
    return 0;
}

```


This program will output the following:



```c
Before: XXXXX
After: Hello
```

## Note
The standard library provides a similar function called `memcpy()`. You can use `man memcpy` to learn more about it.


