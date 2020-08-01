#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n; 
	float sum=1;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		sum += (float)1/pow(2, i);
	}
	printf("Sum1 = %f\n", sum);
	sum = 1;
	for(int i=n; i>0; i--)
	{
		sum += (float)1/pow(2, i);
	}
	printf("Sum2 = %f", sum);
	_getch();
	return 0;
}
