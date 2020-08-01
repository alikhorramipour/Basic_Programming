#include <stdio.h>

/*
int isPrime(int n)
{
    if (n==0 || n==1)   return 0;
    for(int i=2; i<=n/2; i++)	if(n%i==0)	return 0;
    return 1;
}

int main()
{
    int a,b;
    printf("Enter Interval's First Element: ");
    scanf("%d", &a);
    printf("Enter Interval's Second Element: ");
    scanf("%d", &b);
    for(a+1; a<b; a++)	if(isPrime(a))	printf("%d\n", a);
    return 0;
}
*/

int main()
{
    int a, b, flag=1;
    printf("Enter Interval's First Element: ");
    scanf("%d", &a);
    printf("Enter Interval's Second Element: ");
    scanf("%d", &b);
    for(a++; a<b; a++)
	{
		for(int i=2; i<=a/2; i++)
		{
			if(a%i==0)	flag=0;
		}
		if(flag == 1) printf("%d\n", a);
		flag = 1;
	}
    return 0;
}
