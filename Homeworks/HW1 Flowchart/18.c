#include<stdio.h>
#include<math.h>

#define LEN 10

int main()
{
	int number[LEN], m, tmp;
	scanf("%d", &m);
	if(m > LEN) m -= LEN;
	for(int i=0; i<LEN; i++)
	{
		printf("Number[%d]: ", i+1);
		scanf("%d", &number[i]);
	}
	for(int i=0; i<LEN-m-1; i++)
	{
		tmp = number[i];
		number[i] = number[i + m];
		number[i + m] = tmp;
	}
	for(int i=0; i<LEN; i++)
		printf("Number[%d] = %d\n", i+1, number[i]);
	return 0;
}
