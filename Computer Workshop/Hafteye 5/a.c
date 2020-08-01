#include<stdio.h>

/*void doPrint(char func, float in1, float in2, float result)
{
	if (func == 'f')
	{
		printf("Factorial of %f is %f\n", in1, result);
	}
}
*/

int sum(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int sub(int a, int b)
{
	return a - b;
}

float div(float a, float b)
{
	return a / b;
}

int mod(int a, int b)
{
	return a % b;
}

int sin(int a)
{
	int res=a;
	for (int i = 1; i <= 10; i++)
	{
		if(i % 2)
			a += pow()
		else

	}
}


int pow(int a, int b)
{
	if (b == 0)
		return  1;
	else
		return a*pow(a,b-1);
}

int fact(int a)
{
	if (a == 1)
		return  1;
	else
		return a*fact(a - 1);
}

float rev(float a)
{
	return div(1 , a);
}

float comb(int n, int k)
{
	return fact(n) / (fact(k) * fact(n-k));
}

int main()
{
	int flag = 1; 
	float f1, f2;
	char op;
	while(flag)
	{
		printf("Enter Function:m,d,a,s,M,S,C,t,p,f,r,b,L,c,q,*");
		scanf_s(" %c", &op);
		switch (op)
		{
			case 'm':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				printf("%f * %f = %f\n", f1, f2, mul(f1, f2));
				break;
			case 'd':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				printf("%f / %f = %f\n", f1, f2, div(f1, f2));
				break;
			case 'a':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				printf("%f + %f = %f\n", f1, f2, sum(f1, f2));
				break;
			case 's':
				printf("Enter first operand: ");
				scanf_s("%d", &n1);
				printf("Enter second operand: ");
				scanf_s("%d", &n2);
				printf("%d - %d = %d\n", n1, n2, sub(n1, n2));
				break;
			case 'M':
				printf("Enter first operand: ");
				scanf_s("%d", &n1);
				printf("Enter second operand: ");
				scanf_s("%d", &n2);
				printf("%d mod %d = %d\n", n1, n2, mod(n1, n2));
				break;
			case 'S':
			case 'C':
			case 't':
			case 'p':
				printf("Enter first operand: ");
				scanf_s("%d", &n1);
				printf("Enter second operand: ");
				scanf_s("%d", &n2);
				printf("%d ^ %d = %d\n", n1, n2, pow(n1, n2));
				break;
			case 'f':
				printf("Enter n: ");
				scanf_s("%d", &n1);
				printf("%d! = %d\n", n1, fact(n1));
				break;
			case 'r':
				printf("Enter n: ");
				scanf_s("%f", &f1);
				printf("1/%f = %f\n", f1, rev(f1));
				break;
			case 'b':
			case 'L':
			case 'c':
			case 'q':
			case '*':
				flag = 0;
				break;
			default: printf("Bad operator! Try again.\n");
		}
		printf("\n");
	}
	return 0;
}