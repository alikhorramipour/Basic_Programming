#include <stdio.h>
#include <stdlib.h>

const int len = 5;

int main()
{
	int numbers[len], sorted=0, temp;
	for (int i = 0; i < len; i++)
	{
		printf("Enter numbers[%d]: ", i);
		scanf_s("%d", &numbers[i]);
	}
	for (int pass = 0; pass < len - 1 && !sorted; pass++)
		for (int i = 0; i < len - 1 - pass; i++)
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i + 1] = temp;
				sorted = 0;
			}
	for (int i = 0; i < len; i++)
		printf("numbers[%d] = %d\n", i, numbers[i]);
	system("pause");
	return 0;
}