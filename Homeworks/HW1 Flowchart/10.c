#include <stdio.h>

int main()
{
	int n, s=0, f=1, r;
	scanf("%d", &n);
	while(n > 0)
	{
		r = n%2;
		s += r*f;
		f *= 10;
		n /= 2;
	}
	printf("Binary n is %d", s);
}
