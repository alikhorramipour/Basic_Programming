//A.Khorrami Pour - 9631407
#include <stdio.h>

int Pas_Tri(int row, int col)
{
    if( row == col || col==0) return 1;
    else return (Pas_Tri(row-1, col) + Pas_Tri(row-1, col-1) );
}

int main()
{
    int n, q;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter q: ");
    scanf("%d", &q);
    if(q > n)
	{
		printf("\nC(%d, %d) = 0", n, q);
		return 0;
	}
    printf( "\nC(%d, %d) = %d", n, q, Pas_Tri(n, q) );
    return 0;
}
