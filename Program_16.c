// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
#include <stdio.h>
#include <math.h>    
int main() {
	double a, b, c, pr1;  	
	printf("\nInput the first number(a): "); 
    scanf("%lf", &a);
    printf("\nInput the second number(b): "); 
    scanf("%lf", &b);
    printf("\nInput the third number(c): "); 
    scanf("%lf", &c);
    
	pr1 = (b*b) - (4*(a)*(c));
		
    if(pr1 > 0 && a != 0) {
		double x, y;
		pr1 = sqrt(pr1);
		x = (-b + pr1)/(2*a);
		y = (-b - pr1)/(2*a);
		printf("Root1 = %.5lf\n", x);
		printf("Root2 = %.5lf\n", y);
	} 
	else
	 {
		printf("\nImpossible to find the roots.\n");
	}
	
	return 0;
}
