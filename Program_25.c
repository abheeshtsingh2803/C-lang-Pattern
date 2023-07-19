// Write a C program that read 5 numbers and sum of all odd values between them.
#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0) 
		{
		   total += numbers[j];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	return 0;
}
