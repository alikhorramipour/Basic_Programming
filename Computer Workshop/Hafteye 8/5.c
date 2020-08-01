#include<stdio.h>
#include<stdlib.h>
#include<iostream>


int main()
{
	int a[2][2] = { { 1,2 },{ 3,4 } };
	printf("0x%p \n0x%p\n", &a[0][0], &a[1][0]);
	system("pause");
	return 0;
}