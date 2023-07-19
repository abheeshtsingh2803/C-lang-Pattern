// Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
#include<stdio.h>
int main()
{
    int a[5];
    printf("Input the 5 member of the array : ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] <= 5)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
    
return 0;
}