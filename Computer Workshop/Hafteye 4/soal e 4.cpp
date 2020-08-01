#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("Enter n: ");
	scanf("%d",&a);
	int i,j,k=0;
	for(i=0;i<=a;i++)
	{
    	if (i==1)
    	{
        	for(j=0;j<2*a-1;j++)	printf("*");
    	}
    	
    	if (i>1)
    	{
        	for( j=0; j <= a-i; j++ )
            	printf("*");
            	
        	for( j=0; j < 2*k+1; j++ )
            	printf(" ");
            	
        	for( j=0; j <= a-i; j++ )
            	printf("*");
     		k++;
     	}
     	
     printf("\n");
 }
	k -= 2;
	for( i=a-1; i>=0; i-- )
	{
    	if ( i==0 )
    	{
        	for( j=0; j<2*a-1; j++)
    		{
        		printf("*");
        	}
        	return 0;
     	}
     	if ( i>1 )
     	{
        	for( j=a-i; j>=0; j-- )
            	printf("*");
            	
        	for( j=2*k+1; j>0; j-- )
            	printf(" ");
            	
        	for( j=a-i; j>=0; j-- )
        		printf("*");
     		k--;
     	}
     	if ( i-1 ) printf("\n");
 	}
	return 0;
}
