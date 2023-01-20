# Variadic Functions
A **variadic function** is a type of function that can accept a variable number of arguments. This means that you don't have to specify the exact number of arguments that the function will take when you define it.

# `stdarg.h` Library
In C and C++, the `stdarg.h` header file provides macros for working with variadic functions. The following macros are commonly used:
- `va_start`: Initializes a variable of type `va_list` to the first unnamed argument in a variadic function.
- `va_arg`: Retrieves the next argument from the `va_list` variable.
- `va_end`: Cleans up the `va_list` variable when it is no longer needed.

For example, the following code demonstrates how to use these macros to sum up a variable number of integers passed to a variadic function:

```c
#include <stdarg.h>

int sum(int num_args, ...) {
    int sum = 0;
    va_list args;
    va_start(args, num_args);
    for (int i = 0; i < num_args; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

```

It is important to use `va_start` before `va_arg`, and `va_end` after the last `va_arg` call to avoid undefined behavior.

The `const` type qualifier is used to indicate that a variable or function parameter is read-only and cannot be modified. This can be useful for preventing accidental modification of variables and for allowing the compiler to perform more optimization.

For example, the following code demonstrates how to use the `const` type qualifier to create a function that takes a read-only string as a parameter:
```c
void print_string(const char *str) {
    printf("%s", str);
}

```
It should be noted that the const applies only to the object declared and not to what the pointer or reference points to.

```c
int a = 5;
int *const p = &a;
*p = 6; // valid, a is 6
int b = 7;
p = &b; // not valid, error "assignment of read-only variable ‘p’"

```

In this example, the function `print_string` takes a pointer to a string as its argument, but that pointer is marked as `const` which means that the contents of the string cannot be modified through the pointer passed to the function.

It's important to note that `const` applies only to the object it's declared on, and not to what the pointer or reference points to.

