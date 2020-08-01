#include<stdio.h>
#include<conio.h>

int main()
{
	int n, sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	printf("Sum = %d", sum);
	_getch();
	return 0;
}
