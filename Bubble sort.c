#include<stdio.h>

#define LEN 5

int main()
{
    int a[LEN], i, counter=0;
    for(i=0; i<LEN; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int pass, bsorted=0, temp;
    for(pass=0; pass<LEN-1 && !bsorted; pass++)
    {
        for(i=0, bsorted=1; i<LEN-pass-1; i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
                bsorted = 0;
            }
            //printf("%d\n", counter++);
        }
    }
    for(i=0; i<LEN; i++)
        printf("a[%d] = %d\n", i, a[i]);
    return 0;
}
