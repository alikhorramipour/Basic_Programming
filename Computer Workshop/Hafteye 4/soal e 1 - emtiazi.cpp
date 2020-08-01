#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int n,i=1,j,k,a;
	ifstream inp;
	ofstream out;
	inp.open("input.txt", ios::in);
	out.open("output.txt", ios::out);
	while( !inp.eof() )
    {
		inp >> a;
		k=1;
		j=1;
        while(j<=a-1)
        {
            (a%j) ? k++ : k+=0;
            j++;
        }
        (k==a-1) ? out<<"Yes: " << a << " is Prime!\n" : out << "No: "<< a <<" is Not Prime!\n";
        i++;
	}
	inp.close();
	out.close();
	getch();
	return 0;
}

