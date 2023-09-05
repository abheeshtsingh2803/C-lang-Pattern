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

# Data Types in C

Each variable in C has an associated data type. It specifies the type of data that the variable can store like integer, character, floating, double, etc. Each data type requires different amounts of memory and has some specific operations which can be performed over it. The data type is a collection of data with values having fixed values, meaning as well as its characteristics.

The data types in C can be classified as follows:

| Types | Description |
|--|--|
| Primitive Data Types | Primitive data types are the most basic data types that are used for representing simple values such as **integers, float, characters, etc**. |
| User Defined Data Types | The user-defined data types are defined by the user himself such as **structure, union, etc**.|
| Derived Types | The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types such **array, linked list, etc**. |


Different data types also have different ranges up to which they can store numbers. These ranges may vary from compiler to compiler. Below is a list of ranges along with the memory requirement and format specifiers on the 32-bit GCC compiler.

| **Data Type** | **Size (bytes)** | **Range** | **Format Specifier** |
|--|--|--|--|
| short int | 2 | -32,768 to 32,767 | %hd | 
| unsigned short int | 2 | 0 to 65,535 | %hu | 
| unsigned int | 4 | 0 to 4,294,967,295 | %u | 
| int | 4 | -2,147,483,648 to 2,147,483,647 | %d | 
| long int | 4 | -2,147,483,648 to 2,147,483,647 | %ld |
| unsigned long int | 4 | 0 to 4,294,967,295 | %lu |
| long long int | 8 | -(2^63) to (2^63)-1 | %lld |
| unsigned long long int | 8 | 0 to 18,446,744,073,709,551,615 | %llu |
| signed char | 1 | -128 to 127 | %c | 
| unsigned char | 1 | 0 to 255 | %c | 
| float | 4 | 1.2E-38 to 3.4E+38 | %f | 
| double | 8 | 1.7E-308 to 1.7E+308 | %lf | 
| long double | 16 | 3.4E-4932 to 1.1E+4932 | %Lf | 


Note: The long, short, signed and unsigned are datatype modifier that can be used with some primitive data types to change the size or length of the datatyp

#### The following are some main primitive data types in C:

### Integer Data Type

The integer datatype in C is used to store the whole numbers without decimal values. Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

**Range**:  -2,147,483,648 to 2,147,483,647

**Size**: 4 bytes

**Format** Specifier: %d
### Syntax of Integer
We use int keyword to declare the integer variable:
```
int var_name;
```
The integer data type can also be used as

1. unsigned int: Unsigned int data type in C is used to store the data values from zero to positive numbers but it can’t store negative values like signed int.
1. short int: It is lesser in size than the int by 2 bytes so can only store values from –32,768 to 32,767.
1. long int: Larger version of the int datatype so can store values greater than int.
1. unsigned short int: Similar in relationship with short int as unsigned int with int.
```
Note: The size of an integer data type is compiler-dependent.
We can use sizeof operator to check the actual size of any data type.
```
### Character Data Type
Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.

**Range**: (-128 to 127) or (0 to 255)

**Size**: 1 byte

**Format Specifier**: %c

#### Syntax of char
The char keyword is used to declare the variable of character type:
```
char var_name;
```

### Float Data Type
In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.

**Range**: 1.2E-38 to 3.4E+38

**Size**: 4 bytes

**Format Specifier**: %f


#### Syntax of float
The float keyword is used to declare the variable as a floating point:
```
float var_name;
```

### Double Data Type

A Double data type in C is used to store decimal numbers (numbers with floating point values) with double precision. It is used to define numeric values which hold numbers with decimal values in C.

The double data type is basically a precision sort of data type that is capable of holding 64 bits of decimal numbers or floating points. Since double has more precision as compared to that float then it is much more obvious that it occupies twice the memory occupied by the floating-point type. It can easily accommodate about 16 to 17 digits after or before a decimal point.

**Range**: 1.7E-308 to 1.7E+308
**Size**: 8 bytes
**Format Specifier**: %lf
#### Syntax of Double

The variable can be declared as double precision floating point using the double keyword:
```
double var_name;
```

### Void Data Type
The void data type in C is used to specify that no value is present. It does not provide a result value to its caller. It has no values and no operations. It is used to represent nothing. Void is used in multiple ways as function return type, function arguments as void, and pointers to void.

#### Syntax:
```C
// function return type void

void exit(int check);

// Function without any parameter can accept void.

int print(void);

// memory allocation function which
// returns a pointer to void.
void *malloc (size_t size);
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
