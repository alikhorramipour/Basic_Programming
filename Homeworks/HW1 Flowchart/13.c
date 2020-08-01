#include<stdio.h>
#include<math.h>

int fact(int a)
{
	if (a == 1)
		return  1;
	else
		return a*fact(a - 1);
}

float sins(float a)
{
	float res=a;
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2)
			res -= pow(a, 2 * i + 1) / fact(2 * i + 1);
		else
			res += pow(a, 2 * i + 1) / fact(2 * i + 1);
	}
	return res;
}

int main()
{
	float x;
	scanf("%f", &x);
	printf("%.4f", sins(x));
	return 0;
}

