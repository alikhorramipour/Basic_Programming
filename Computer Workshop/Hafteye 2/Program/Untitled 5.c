#include <stdio.h>

#define PI 3.1416

int main()
{
		double r, result;
		printf("Enter the radius:");
		scanf("%lf", &r);
		result = r*r*PI;
		printf("%.3lf", result);
		return 0;
}