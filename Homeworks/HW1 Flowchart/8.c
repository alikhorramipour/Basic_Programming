#include<stdio.h>

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	int a, b, r;
	scanf("%d%d", &a, &b);
	if(b > a)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("gcd(a, b) is %d", gcd(a, b) );
	return 0;
}
