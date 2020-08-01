#include<stdio.h>

int main()
{
    int n, nfact=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)		nfact *= i;
    printf("n! is= %d", nfact);
    return 0;
}
