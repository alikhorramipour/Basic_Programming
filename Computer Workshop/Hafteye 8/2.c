#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

int main()
{
	int i, sum = 0;
	int num[SIZE];
	printf("Enter %d numbers:\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &num[i]);
	}
	int *temp;
	for (i = 0; i < SIZE; i++)
	{
		temp = &num[i];
		sum += *temp;
	}
	printf("Sum: %d\n", sum);
	system("pause");
	return 0;
}