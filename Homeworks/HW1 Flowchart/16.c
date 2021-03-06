#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n==0 || n==1)   return 0;
    for(i=2; i<=n/2; i++)	if(n%i==0)	return 0;
    return 1;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n%2)
    {
        printf("%d is Not Even !", n);
        return 0;
    }
    if(n == 2)
    {
        printf("2 is an Exception !");
        return 0;
    }
    if(n == 4)
    {
        printf("4 = 2 + 2");
        return 0;
    }
    int i, j;
    for(i=3; i<n; i+=2)
        for(j=n-i; j>2; j-=2)
            if( isPrime(i)+isPrime(j)==2 && i+j==n )
            {
                printf("%d = %d + %d", n, i, j);
                return 0;
            }
}
