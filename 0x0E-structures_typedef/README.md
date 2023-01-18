# Structures and typedef in C

In C programming, a structure (also known as a "struct") is a collection of variables grouped together under a single name. Structures are used to represent a record, and each variable within a struct is called a "member". Structures are useful for organizing related data and can be used to create more complex data types.

For example, the following code defines a struct called "student" with three members: a name, an age, and a grade point average (GPA):
```c
struct student {
    char name[50];
    int age;
    float gpa;
};

```

You can create a variable of this struct type using the following syntax:

```c
struct student s1;

```

A `typedef` statement creates an alias for a data type, allowing you to use the new type name instead of the original type name. For example, the following code creates a typedef for the struct student:

```c
typedef struct student {
    char name[50];
    int age;
    float gpa;
} Student;

```

You can then use the new type name "Student" to create a variable of this struct type:

```c
Student s1;

```
It's worth noting that `typedef` is often used to make the code more readable and easy to understand.

Additionally, Structures can also be used with pointers to access the structure variables.

```c
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;

```

You can access the variables of the structure using the pointer as well

```c
p->y = 98;

```

This will set the value of y to 98 in the structure variable my_point.

It's considered good practice to write documentation for all the structures you create as soon as you write them. This helps to ensure that the structure is well-understood by yourself and any other developers who may be working on the codebase. Additionally, it makes it easier to maintain and update the code in the future.


# EXAMPLE
```c
#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

int main()
{
    // Creating an instance of the struct student
    struct student s1;
    strcpy(s1.name, "John Doe");
    s1.age = 21;
    s1.gpa = 3.8;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %f\n", s1.gpa);

    // Using typedef to create an alias for the struct student
    typedef struct student Student;
    Student s2;
    strcpy(s2.name, "Jane Smith");
    s2.age = 22;
    s2.gpa = 3.9;

    printf("\nName: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("GPA: %f\n", s2.gpa);

    // Using pointers with structs
    struct point {
        int x;
        int y;
    };
    struct point my_point = { 3, 7 };
    struct point *p = &my_point;

    printf("\nx: %d\n", my_point.x);
    printf("y: %d\n", my_point.y);

    // Accessing struct members using pointers
    p->y = 98;
    printf("\nx: %d\n", my_point.x);
    printf("y: %d\n", my_point.y);

    return 0;
}

```
