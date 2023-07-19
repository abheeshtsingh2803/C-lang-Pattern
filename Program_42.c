// Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
#include <stdio.h>
int main() {
	double s=0, j=1, d, i;

	for(i=1; i<=7; i+=2){
		
		d = (i/j);
		s += d;
		j = j*2;
	}
    printf("Value of series: %.2lf\n", s);
    return 0;
}
