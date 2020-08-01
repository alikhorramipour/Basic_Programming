#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

int main()
{
	int arr[4] = { 1, 2, 3, 4 };
	int *arr_cpy;
	arr_cpy = arr;
	/*for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr_cpy[i]);
	}*/
	system("pause");
	return 0;
}