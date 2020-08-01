#include<stdio.h>

int main()
{
	int n, nzero=0, i=5;
	scanf("%d", &n);
	while (i <= n)
	{
		nzero += n/i;
		i *= 5;
	}
	printf("%d! has %d zero(s)", n, nzero);
	return 0;
}
