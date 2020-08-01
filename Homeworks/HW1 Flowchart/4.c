#include<stdio.h>

int main()
{
	int counter=1, temp, sum=0;
	scanf("%d", &temp);
	sum += temp;
	while(temp > 0)
	{
		scanf("%d", &temp);
		sum += temp;
		counter++;
	}
	printf("Average is %f", (float)sum/counter);
	return 0;
}
