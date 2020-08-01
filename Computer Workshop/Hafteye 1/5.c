#include<stdio.h>
#include<conio.h>

int main(){
	int n=1000000;
	n+=n/5;
	n+=n/5;
	n+=n/5;
	printf("Money = %d\n", n);
	getch();
	return 0;
}
