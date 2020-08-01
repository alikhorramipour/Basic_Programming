#include <stdio.h>
#include <stdlib.h>

const int len = 5;

int main()
{
	int arr[len];
	for (int i = 0; i < len; i++)
	{
		printf("Enter arr[%d]: ", i);
		scanf_s("%d", &arr[i]);
	}
	for (int i = len-1; i >= 0; i--)
		printf("arr[%d] = %d\n", i, arr[i]);
	system("pause");
	return 0;
}