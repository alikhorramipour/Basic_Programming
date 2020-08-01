#include<stdio.h>

int main()
{
	int a=1, b=1, temp;
	printf("%d     ", b);
	while (b < 1000)
	{
		printf("%d     ", b);
		a = a+b;
		temp = a;
		a = b;
		b = temp;
	}
	return 0;
}
