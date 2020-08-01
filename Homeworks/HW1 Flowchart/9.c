#include<stdio.h>
#include<math.h>

int main()
{
	int counter =100;
	for(int i=1; i<=9; i++)
		for(int j=0; j<=9; j++)
			for(int k=0; k<=9; k++)
			{
				if (pow(i, 3) + pow(j, 3) + pow(k, 3) == counter)
					printf("%d\t", counter);
				counter++;
			}
}
