#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, temp, r;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if ( b > a )
    {
        temp = a;
        a = b;
        b = temp;
    }
    if ( a%b == 0 )
    {
        printf( "%d", b );
        return 0;
    }
    r = a%b;
    while( r )
    {
        a = b;
        b = r;
        r = a%b;
    }
    printf("The Greatest Common Divisor of the Entered Numbers is: %d", b);
	getch();
	return 0;
}

