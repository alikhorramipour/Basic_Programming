#include<stdio.h>

int main()
{
	int n, temp, max, maxRepeat=0;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter number #1 : ");
	scanf("%d", &max);
	for(int i=1; i<n; i++)
	{
		printf("Enter number #%d : ", i+1);
		scanf("%d", &temp);
		if(max < temp)
		{
			maxRepeat = 0;
			max = temp;
		}
		else if(temp == max) maxRepeat++;
	}
	printf("Max is %d\n", max);
	printf("Max repeat is %d", maxRepeat);
	return 0;
}
