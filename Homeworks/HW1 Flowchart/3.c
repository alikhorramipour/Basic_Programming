#include <stdio.h>

int main()
{
    int n, sum=0, max1, max2, max1Repeat=0, temp;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter n1: ");
    scanf("%d", &max1);
    sum += max1;
    printf("Enter n2: ");
    scanf("%d", &max2);
    sum += max2;
    if(max2 == max1)
	{
		max1Repeat++;
		max2 = -2147483648;
	}
    if(max2 > max1)     
	{
		temp = max1;
		max1 = max2;
		max2 = temp;
		max1Repeat=0;
	}
    for(int i=2; i<n; i++)
    {
        printf("Enter n%d: ", i+1);
        scanf("%d", &temp);
        sum += temp;
        if(temp > max1)
        {
            max2 = max1;
            max1 = temp;
            max1Repeat = 0;
        }
        else if(temp == max1)    max1Repeat++;
        else if(temp > max2)     max2 = temp;
    }
    if(max2 == -2147483648)
    	max2 = max1;
    printf("Max1= %d\n", max1);
    printf("Max2= %d\n", max2);
    printf("Max1Repeat= %d\n", max1Repeat);
    printf("Avg= %f\n", (float)sum/n );
    return 0;
}
