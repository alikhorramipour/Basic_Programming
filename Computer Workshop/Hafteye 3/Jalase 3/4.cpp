#include<stdio.h>

int main()
{
	int i, a, sum=0;
	for(i=1; i<11; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("Sum = %d, Avg = %d", sum, sum/10);
	return 0;
}
