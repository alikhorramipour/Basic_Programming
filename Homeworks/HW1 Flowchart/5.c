#include<stdio.h>

int main()
{
	int temp, temp1, temp2=1;
	char sit = 'a';
	scanf("%d", &temp1);
	scanf("%d", &temp2);
	if(temp2 <= temp1)	
	{
		sit = 'd';
	}
	while(temp2 > 0)
	{
		scanf("%d", &temp2);
		if(temp2<0)
			break;
		if( (temp2 < temp1 && sit=='a' && temp2>0) || (temp2 > temp1 && sit=='d' && temp2>0) )	
		{
			printf("Not Sorted!");
			return 0;
		}
		temp = temp1;
		temp1 = temp2;
		temp2 = temp;
	}
	printf((sit=='a')?"Sorted and Ascending!":"Sorted and Descending!");
	return 0;
}
