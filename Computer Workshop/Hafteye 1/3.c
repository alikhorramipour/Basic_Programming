#include <stdio.h>
#include <conio.h>

int main(){
	int in=268465;
	int temp = in;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	a = in % 10;
	in /= 10;
	b = in % 10;
	in /= 10;
	c = in % 10;
	in /= 10;
	d = in % 10;
	in /= 10;
	e = in % 10;
	in /= 10;
	f = in % 10;
	in /= 10;
	printf ("Reverse of %d : %d%d%d%d%d%d\n", temp,a,b,c,d,e,f);
	getch();
	return 0;
}
