#include <stdio.h>

#define LEN 20

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*void print(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
*/

int main()
{
	int a, b;
	printf("Enter First Number: ");
	scanf("%d", &a);
	printf("Enter Second Number: ");
	scanf("%d", &b);
	
	if (a < b)	swap(&a, &b);
	
	if (a == b)
	{
		printf("Yes\n");
		return 0;
	}
	
	int arr1[LEN], size1=0, temp = a;
	for(int i=0; i<LEN && temp; i++)
	{
		arr1[i] = temp%10;
		temp /= 10;
		size1++;
	}
	
	int arr2[LEN], size2=0;
	temp = b;
	for(int i=0; i<LEN && temp; i++)
	{
		arr2[i] = temp%10;
		temp /= 10;
		size2++;
	}
	
	
	int flag=0;
	for(int i=0; i<size1; i++)
	{
		if(arr1[i]==arr2[0])
		{
			//printf("arr1[%d]=%d va arr2[0]=%d\n", i, arr1[i], arr2[0]);
			flag = 1;
			for(int j=0; j<size2 && i+j<size1; j++)
			{
				//printf("arr1[%d]=%d va arr2[%d]=%d\n", i+j, arr1[i+j], j, arr2[j]);
				//printf("flag is %d\n", flag);
				if(arr1[i+j] != arr2[j])
				{
					//printf("arr1[i+j] != arr2[j] is %d\n", arr1[i+j] != arr2[j]);
					//printf("bekhatere arr1[%d]=%d va arr2[%d]=%d\n", i+j, arr1[i+j], j, arr2[j]);
					flag = 0;
					//printf("flag is %d\n", flag);
					break;
				}
			}
		}
		if(flag)
		{
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}