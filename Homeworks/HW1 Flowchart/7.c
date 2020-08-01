#include<stdio.h>

int main()
{
	int sum, counter=0;
	for(int n=2; n<1001; n++)
	{
		sum = 0;
		for(int i=1; i<=n/2; i++)
			{
				if(n%i==0)
					sum += i;
			}
		if(sum == n)
		{
			counter++;
			printf("Perfect number #%d is %d\n", counter, n);
		}
	}
	return 0;
}
