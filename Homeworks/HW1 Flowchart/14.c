#include<stdio.h>

int fact(int a)
{
	if (a == 1 || a == 0)
		return  1;
	else
		return a*fact(a - 1);
}

int main()
{
	int a;
	scanf("%d", &a);
	if( a == 0 || a == 1 )
	{
		printf("a is 0!(or 1!)");
		return 0;
	}
	else if( a == 2 )
	{
		printf("a is 2!");
		return 0;
	}
	for(int i=0; i<=a/2; i++)
	{
		if( a == fact(i) )
		{
			printf("%d is %d!", a, i);
			return 0;
		}
	}
	printf("%d is not a factorial!", a);
	return 0;
}
