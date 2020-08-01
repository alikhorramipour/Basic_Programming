#include<stdio.h>
#include<math.h>

int main()
{
	int n, temp, closest = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter number #1 : ");
	scanf("%d", &closest);
	for(int i=1; i<n; i++)
	{
		printf("Enter number #%d : ", i+1);
		scanf("%d", &temp);
		if(abs(n-temp) < abs(n-closest))
			closest = temp;
	}
	printf("Closest to %d is %d", n, closest);
	return 0;
}
