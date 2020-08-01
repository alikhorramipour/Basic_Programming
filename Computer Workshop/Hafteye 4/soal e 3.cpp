#include <stdio.h>
#include <conio.h>

int fibonacci ( int a )
{
    if ( a==0 || a==1)
        return 1;
    if ( a>=2 )
        return fibonacci( a-1 ) + fibonacci( a-2 );
}

int main()
{
    int a, b;
    printf("Enter the Number: ");
    scanf("%d", &a);
	for(int i=0; i<=a; i++)
    {
        b = fibonacci( i );
        if ( a==b )
        {
            printf("The Entered Number is in the Fibonacci Sequence!");
			getch();
			return 0;
        }
    }
    printf("The Entered Number isn't in the Fibonacci Sequence!");
	getch();
	return 0;
}
