//Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
#include <stdio.h>
int main() {
	int a, i, j = 1, x = 0;
	printf("Input number of lines: ");
	scanf("%d", &a);
	for(i = 1; i <= a; i++) {
		while(x < 3) {
			printf("%d ", j++);
			x++;
		}
		x = 0;
		printf("\n");
	}
	
	return 0;
}
