//A.Khorrami Pour - 9631407
#include <stdio.h>

#define SIZE 30

int Pas_Tri[SIZE][SIZE];

void createTri()
{
	Pas_Tri[0][0] = 1;
	Pas_Tri[1][0] = 1;
	Pas_Tri[1][1] = 1;
	for(int i=2; i<SIZE; i++)
		for(int j=0; j<=i; j++)
			Pas_Tri[i][j] = Pas_Tri[i-1][j-1] + Pas_Tri[i-1][j];
}

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
	createTri();
	printf("\nC(%d, %d) = %d", n, q, Pas_Tri[n][q]);
	return 0;
}
