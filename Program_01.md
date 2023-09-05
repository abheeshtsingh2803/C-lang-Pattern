# printf() Function
In C language, printf function is used to print output on the screen.  This function is a part of the C standard library “stdio.h” and it can allow formatting the output in numerous ways.

Syntax of printf:

```
printf("format String", Arguments);
```


Here,

Format String: It is a string that specifies the output. It may also contain a format specifier to print the value of any variable such as character and an integer value.
Arguments: These are the variable names corresponding to the format specifier.
Format Specifier in C
In C, a value can be a character type, integer type, float type, and so on. To display these values we have format specifiers used in printf function. These format specifiers start with the percentage symbol ‘%’. Some of the commonly used format specifiers are given below.

```C
%d - for printing integers
%f - for printing floating-point numbers
%c - for printing characters
%s - for printing strings
%p - for printing memory addresses
%x - for printing hexadecimal values
```

## Write a C program to print your name, date of birth, and mobile number.

```
#include <stdio.h> 
 int main()  
  {
     printf("Name   : Abheesht Singh\n"); 
     printf("DOB    : 28 Dec, 2003\n"); 
     printf("Mobile : 99-9999999999\n"); 
     return(0); 
  }
```
