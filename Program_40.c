// Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
#include <stdio.h>
int main() 
{
	int marks[99], m, i, a=0, total=0;
	float f;
	printf("Input Mathematics marks (0 to terminate): ");
	for(i = 0; ; i++) 
	{
		scanf("%d", &marks[i]);
		if(marks[i] <= 0) {
		break;
		}
		a++;
		total += marks[i];
	}
	f = (float)total/(float)a;
	printf("Average marks in Mathematics: %.2f\n", f);
	return 0;
}
