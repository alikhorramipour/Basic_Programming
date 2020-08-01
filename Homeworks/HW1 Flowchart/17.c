#include<stdio.h>
#include<math.h>

#define LEN 10

int main()
{
	float sum=0, ave, var=0;
	float number[LEN];
	for(int i=0; i<LEN; i++)
	{
		printf("Number[%d]: ", i+1);
		scanf("%f", &number[i]);
		sum += number[i];
	}
	ave = sum/LEN;
	for(int i=0; i<LEN; i++)
		var += abs(number[i] - ave);
	printf("The variance is %f", var);
	getch();
	return 0;
}
