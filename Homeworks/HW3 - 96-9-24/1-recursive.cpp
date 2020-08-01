//A.Khorrami Pour - 9631407
#include<iostream>

using namespace std;

int KhTri(int row, int col)
{
    if( row == col || col==0) return 1;
    else return (KhTri(row-1, col) + KhTri(row-1, col-1) );
}

int main()
{
    int n, q;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter q: ";
    cin >> q;
    if(q > n)
	{
		cout << "\nC(" << n << ", " << q << ") = 0";
		return 0;
	}
    cout << "\nC(" << n << ", " << q << ") = " << KhTri(n, q);
    return 0;
}
