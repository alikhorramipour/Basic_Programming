//A.Khorrami Pour - 9631407
#include <stdio.h>

#define SIZE 50

int Pas_Tri[SIZE]={1};

int main()
{
	int n, q;
	printf("Enter q(<30): ");
	scanf("%d", &q);
	printf("Enter n(<30): ");
	scanf("%d", &n);
	if(q > n)
	{
		printf("\nC(%d, %d) = 0", n, q);
		return 0;
	}
	for(int i=1; i<=q; i++)
		Pas_Tri[i] = Pas_Tri[i-1] * ((n+1)-i)/i;
	printf("\nC(%d, %d) = %d", n, q, Pas_Tri[q]);
	return 0;
}

