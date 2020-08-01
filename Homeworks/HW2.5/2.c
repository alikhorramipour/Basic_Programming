//A.Khorrami Pour - 9631407
#include <stdio.h>

#define LEN 100

int main()
{
    int mat1[LEN][LEN], mat2[LEN][LEN], res[LEN][LEN]={(0,0)};
    int size1x, size1y, size2x, size2y;
    int i, j, k, sum=0;

    printf("Enter First Matrix Size(x,y): ");
    scanf("%d%d", &size1x, &size1y);
    printf("Enter First Matrix: ");
    for(i=0; i<size1x; i++)
    {
        for(j=0; j<size1y; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter Second Matrix Size(x,y): ");
    scanf("%d%d", &size2x, &size2y);
    printf("Enter Second Matrix: ");
    for(i=0; i<size2x; i++)
    {
        for(j=0; j<size2y; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if(size1y != size2x)
    {
        printf("These two Matrices Cannot be Multiplied!");
        return 0;
    }
    for (i = 0; i < size1x; i++)
    {
        for (j = 0; j < size2y; j++)
        {
            for (k = 0; k < size2x; k++)
            {
                sum += mat1[i][k]*mat2[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }
    printf("Product of Entered Matrices: \n");
    for(i=0; i<size1y; i++)
    {
        for(j=0; j<size2x; j++)
            printf("%d   ", res[i][j]);
        printf("\n");
    }
    return 0;
}
