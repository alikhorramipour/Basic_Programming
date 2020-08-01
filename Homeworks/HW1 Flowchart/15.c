#include<stdio.h>

int isPrime(int n)
{
    int i;
    if (n==0 || n==1)   return 0;
    for(i=2; i<=n/2; i++)	if(n%i==0)	return 0;
    return 1;
}

int main()
{
	int a;
	scanf("%d", &a);
	for(int i=2; i<=a/2; i++)
	{
		if(a%i==0 && isPrime(i))
			printf("%d\n", i);
	}
	return 0;
}
