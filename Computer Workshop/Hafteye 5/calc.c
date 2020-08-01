#include<stdio.h>

void doPrint(char func, float in1, float in2, float result)
{
	switch (func)
	{
		case 'm':
			printf("%f * %f = %f\n", in1, in2, result);
			break;
		case 'd':
			printf("%f / %f = %f\n", in1, in2, result);
			break;
		case 'a':
			printf("%f + %f = %f\n", in1, in2, result);
			break;
		case 's':
			printf("%f - %f = %f\n", in1, in2, result);
			break;
		case 'M':
			printf("%f % %f = %f\n", in1, in2, result);
			break;
		case 'S':
			printf("Sin(%f) = %f\n", in1, result);
			break;
		case 'C':
			printf("Cos(%f) = %f\n", in1, result);
			break;
		case 't':
			printf("Tan(%f) = %f\n", in1, result);
			break;
		case 'p':
			printf("%d ^ %d = %d\n", in1, in2, result);
			break;
		case 'f':
			printf("%f! = %f\n", in1, result);
			break;
		case 'r':
			printf("1/%f = %f\n", in1, result);
			break;
		case 'b':
			printf("Sin(%f) = %f\n", in1, result);
			break;
		case 'L':
			printf("Logn(%f) = %f\n", in1, result);
			break;
		case 'c':
			printf("c(%d,%d) = %f\n", in1, in2, result);
			break;
	}
}

void errorOccurred(char type) 
{
	if (type == 'o')
	{
		printf("ERROR::out of range input!!");
	}
	else if(type == 'd')
		printf("ERROR::division by zero!!");
}

float div(float a, float b)
{
	if (b == 0)
		errorOccurred('d');
	return a / b;
}

int pow(int a, int b)
{
	if (b == 0)
		return  1;
	else
		return a*pow(a, b - 1);
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
	return div(1, a);
}

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

int mod(int a, int b)
{
	return a % b;
}

float sin(int a)
{
	float res=a;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2)
			res -= pow(a, 2 * i + 1) / fact(2 * i + 1);
		else
			res += pow(a, 2 * i + 1) / fact(2 * i + 1);
	}
	return res;
}

float cos(int a)
{
	float res = 1;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2)
			res -= pow(a, 2 * i) / fact(2 * i);
		else
			res += pow(a, 2 * i) / fact(2 * i);
	}
	return res;
}

float tan(float a)
{
	return sin(a) / cos(a);
}

float logn(float a)
{
	int o = -1;
	float res = a - 1, a1 = a;
	if (a1<=1 || a1>-1)
	{
		for (int i = 1; i <= 10; i++)
		{
			res += o*(pow(a1, i + 2) / i + 1);
			o *= -1;
		}
		return res;
	}
	else
	{
		int o = -1;
		float res = a - 1, a1 = rev(a);
		for (int i = 1; i <= 10; i++)
		{
			res += o*(pow(a1, i + 2) / i + 1);
			o *= -1;
		}
		return -res;
	}
}


/*int b(int a, int b1, int b2)
{
	if (b1 == 2 && b2 == 10)
	{
		
	}
	if (b1 == 10 && b2 == 2)
	{
		int s = 0, f = 1;
		while ()
	}
	if (b1 == 2 && b2 == 16)
	{

	}
	if (b1 == 16 && b2 == 2)
	{

	}
}*/

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
				doPrint('m', f1, f2, mul(f1, f2));
				break;
			case 'd':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				doPrint('d', f1, f2, div(f1, f2));
				break;
			case 'a':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				doPrint('a', f1, f2, sum(f1, f2));
				break;
			case 's':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%f", &f2);
				doPrint('s', f1, f2, sub(f1, f2));
				break;
			case 'M':
				printf("Enter first operand: ");
				scanf_s("%d", &f1);
				printf("Enter second operand: ");
				scanf_s("%d", &f2);
				doPrint('M', f1, f2, mod(f1, f2));
				break;
			case 'S':
				printf("Enter operand: ");
				scanf_s("%f", &f1);
				doPrint('S', f1,0, sin(f1));
				break;
			case 'C':
				printf("Enter operand: ");
				scanf_s("%f", &f1);
				doPrint('C', f1, 0, cos(f1));
				break;
			case 't':
				printf("Enter operand: ");
				scanf_s("%f", &f1);
				doPrint('t', f1, 0, tan(f1));
				break;
			case 'p':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				printf("Enter second operand: ");
				scanf_s("%d", &f2);
				doPrint('p', f1, f2, pow(f1, f2));
				break;
			case 'f':
				printf("Enter operand: ");
				scanf_s("%d", &f1);
				doPrint('f', f1, 0, fact(f1));
				break;
			case 'r':
				printf("Enter operand: ");
				scanf_s("%f", &f1);
				doPrint('r', f1, 0, rev(f1));
				break;
			//case 'b':
			case 'L':
				printf("Enter first operand: ");
				scanf_s("%f", &f1);
				doPrint('L', f1, 0, logn(f1));
				break;
			case 'c':
				printf("Enter first operand: ");
				scanf_s("%d", &f1);
				printf("Enter second operand: ");
				scanf_s("%d", &f2);
				doPrint('c', f1, f2, comb(f1, f2));
				break;
			//case 'q':
			case '*':
				flag = 0;
				break;
			default: printf("Bad operator! Try again.\n");
		}
		printf("\n");
	}
	return 0;
}
