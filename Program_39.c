//Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
#include <stdio.h>
int main() {
	int x, y, i, j, l;
	printf("Input number of lines: ");
	scanf("%d", &x);
	printf("Number of numbers in a line: ");
    scanf("%d", &y);
	for(i = 1, l=1; i <= x; i++) 
	  {
		for(j = 1; j <= y; j++) 
	 	{
		  printf("%d ",l);		
		  l++; 
			}
			printf("\n");
		}
	
  return 0;
}
