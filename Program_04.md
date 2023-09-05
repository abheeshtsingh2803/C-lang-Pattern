# C Variables
A **variable in C language** is the name associated with some memory location to store data of different types. There are many types of variables in C
depending on the scope, storage class, lifetime, type of data they store, etc. A variable is the basic building block of a C program that can be used in 
expressions as a substitute in place of the value it stores.

***What is a variable in C?***
```

A variable in C is a memory location with some name that helps store some form of data and retrieves it when required. We can
store different types of data in the variable and reuse the same variable for storing some other data any number of times.

```
They can be viewed as the names given to the memory location so that we can refer to it without having to memorize the memory address. The size of the variable depends upon the data type it stores.

## C Variable Syntax
The syntax to declare a variable in C specifies the name and the type of the variable.
```c

data_type variable_name = value;    // defining single variable
            or
data_type variable_name1, variable_name2;    // defining multiple variable

```
Here,

**data_type**: Type of data that a variable can store.

**variable_name**: Name of the variable given by the user.
value: value assigned to the variable by the user.
Example
```c

int var;    // integer variable
char a;     // character variable
float fff;  // float variables

```
**Note**: C is a strongly typed language so all the variables types must be specified before using them.

variable declaration breakdown
Variable Syntax Breakdown

There are 3 aspects of defining a variable:

**Variable Declaration**

**Variable Definition**

**Variable Initialization**



**1. C Variable Declaration** :-

Variable declaration in C tells the compiler about the existence of the variable with the given name and data type. No memory is allocated to a variable in the declaration.

**2. C Variable Definition** :-

In the definition of a C variable, the compiler allocates some memory and some value to it. A defined variable will contain some random garbage value till it is not initialized.

**Example**
```c

int var;
char var2;

```

**Note**: Most of the modern C compilers declare and define the variable in single step. Although we can declare a variable in C by using extern keyword, it is not required in most of the cases. To know more about variable declaration and definition, click here.

**3. C Variable Initialization** :-

Initialization of a variable is the process where the user assigns some meaningful value to the variable.

**Example**
```c

int var; // variable definition
var = 10; // initialization
      or
int var = 10; // variable declaration and definition

```

## Write a C program to display multiple variables.

```C
#include <stdio.h> 
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c =  %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("((int) dx) + ax =  %ld\n", ((int) dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b =  %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c =  %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}
```
