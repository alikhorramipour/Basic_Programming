#include<stdio.h>

/*
int fact(int n)
{
	int nfact=1;
    for(int i=1; i<=n; i++)		nfact *= i;
    return nfact;
}

int comb(int n, int r)
{
    return fact(n)/( fact(r) * fact(n-r));
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        printf("%d\n", per(n, i));
    }
    return 0;
}
*/

int main()
{
    int n, nfact=1, rfact=1, nrfact=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
    	for(int j=1; j<=n; j++)
				nfact *= j;
		for(int k=2; k<=i; k++)
				rfact *= k;
		for(int l=2; l<=n-i; l++)
				nrfact *= l;
        printf("%d    ", nfact/( rfact * nrfact));
        nfact = 1;
        rfact = 1;
        nrfact = 1;
    }
    return 0;
}

