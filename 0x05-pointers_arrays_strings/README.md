# Update Integer Using Pointer

This program demonstrates how to update the value of an integer using a pointer in C. It includes a function `reset_to_98` that takes a pointer to an integer as a parameter and updates the value it points to to 98.

## Usage

To use this program, compile the `0-reset_to_98.c` and `0-main.c` files using the following command:
'''c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98


Then, run the resulting executable:

'''c
./98


This will output the original value of the integer (402) and the updated value (98).

## Files

- `0-reset_to_98.c`: Contains the `reset_to_98` function that updates the value of an integer using a pointer.
- `0-main.c`: Contains a main function that demonstrates how to use the `reset_to_98` function.
- `main.h`: Contains the function prototype for the `reset_to_98` function.

## Example Output

'''c
n=402
n=98


## Notes

- This program follows the Betty style guidelines for C code.
- The `main.h` header file is used to declare the function prototype and define any constants or macros that will be used in the program.


# swap_int

This function swaps the values of two integers using a temporary variable.

## Prototype:
void swap_int(int *a, int *b);

## Example:
'''c
int a = 98;
int b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);

## Output:
'''c
a=98, b=42
a=42, b=98

