//A.Khorrami Pour - 9631407
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, flag=1;
    printf("Enter Interval's First Element: ");
    scanf("%d", &a);
    printf("Enter Interval's Second Element: ");
    scanf("%d", &b);
    if(b <= a || b-a==1)
    {
		printf("\nFinish.");
		return 0;
	}
    //sieve(a+1, b-1);
    int prime[b+1];
	for(int i=0; i<b+1; i++)
		prime[i] = 1;
	prime[0] = 0;
	prime[1] = 0;
    for(int p=2; p*p<=b; p++)
    {
    	if (prime[p])
		{
        	for (int i=p*2; i<=b; i+=p)
                prime[i] = 0;
    	}
    }
    int p=a;
    char op;
    while(flag)
	{
		printf("Enter q(Q) to Stop or any Other Key to Continue:");
		op = getch();
		switch (op)
		{
			case 'q':
				printf("\nProgram Ended.\n");
				return 0;
			case 'Q':
				printf("\nProgram Ended.\n");
				return 0;
			default: p++;
		}
		for(p; p<b; p++)
		{
			if(p==b-1 && prime[p])
			{
				printf("%d\n", p);
				printf("\nFinish.");
				return 0;
			}
    		if(prime[p])
			{
				printf("%d\n", p);
				break;
			}
			if(p==b-1)
			{
				printf("\nFinish.");
				return 0;
			}
		}
	}
	return 0;
}
