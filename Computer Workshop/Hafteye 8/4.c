#include<stdio.h>
#include<stdlib.h>
#include<iostream>

#define SIZE 4

bool compare(char first[], char second[])
{
	for (int i = 0; first[i] || second[i]; i++)
	{
		if (first[i] > second[i] || first[i] < second[i])
			return 0;
	}
	return 1;
}

int main()
{
	char a[70], b[70];
	printf("Enter First String: ");
	std::cin >> a;
	printf("Enter Second String: ");
	std::cin >> b;
	printf(compare(a, b) ? ("True\n") : ("False\n"));
	system("pause");
	return 0;
}