// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
#include <stdio.h>
int main() 
{
	int x;
	float y;
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);
	printf("Average consumption (km/lt) %.3f ",x/y);
	printf("\n");
	return 0;
}