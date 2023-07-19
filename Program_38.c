// Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
#include <stdio.h>
int main() {
	int a, i, j = 1, x = 0;
	printf("Input number of lines: ");
	scanf("%d", &a);
	
    for(i = 1; i <= a; i++) {
		printf("%d %d %d\n", i, i*i, i*i*i);
	  }
	
	return 0;
}