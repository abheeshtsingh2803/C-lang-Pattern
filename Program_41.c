// Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
#include <stdio.h>
int main() {
	float S = 0;
	int i;
	for(i=1; i<=50; i++)
	{
		S += (float)1/i;
    }
    printf("Value of S: %.2f\n", S);

	return 0;
}
