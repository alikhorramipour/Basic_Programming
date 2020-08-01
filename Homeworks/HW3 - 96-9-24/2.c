//A.Khorrami Pour - 9631407
#include <stdio.h>

#define LEN 1000

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void insertionSort(int arr[], int size)
{
   for (int i = 1, j; i < size; i++)
   {
       j = i;
       while (j-- && arr[j] > arr[j+1])
           swap(&arr[j+1], &arr[j]);
   }
}

int main()
{
	int n, arr[1000];
	printf("Enter n(<1000): ");
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	insertionSort(arr, n);
	printf("Sorted Array is:\n");
	for(int i=0; i < n; i++)
		printf("arr[%d]: %d\n", i, arr[i]);
	return 0;
}
