#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i=1,j,k,a;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Enter the number: ");
		scanf("%d", &a);
		k=1;
		j=1;
		while( j<=a-1 )
		{
				(a%j) ? k++ : k+=0;
				j++;
		}
		(k==a-1) ? printf("Yes: %d is Prime!\n",a) : printf("No: %d is Not Prime!\n",a);
		i++;
	}
	getch();
	return 0;
}

		
