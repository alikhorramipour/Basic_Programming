//A.Khorrami Pour - 9631407
#include <stdio.h>

int isPalindrome(int num)
{
	int n, digit, rev = 0;
    n = num;
    while(num)
    {
        digit = num % 10;
        rev *= 10;
		rev += digit;
        num = num / 10;
    }
    if (n == rev)
        return 1;
    else
        return 0;
}

int main()
{
	int m, n;
	printf("Enter m: ");
	scanf("%d", &m);
	m++;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n)
	{
		if(isPalindrome(m))
		{
			printf("%d\n", m);
			n--;
		}
		m++;
	}
	return 0;
}
