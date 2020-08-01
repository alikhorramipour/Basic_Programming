#include <stdio.h>
#include <stdlib.h>

const int len = 10;

int main()
{
	int arr[len], max;
	float sum=0;
	printf("Enter arr[0]: ");
	scanf_s("%d", &arr[0]);
	max = arr[0];
	sum += arr[0];
	for (int i = 1; i < len; i++)
	{
		printf("Enter arr[%d]: ", i);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	printf("Avg is = %f\n", (float)sum/len);
	printf("Max is = %d\n", max);
	system("pause");
	return 0;
}