#include<iostream>

using namespace std;

int DtoB(int n)
{
    if (n==1 || n==0)   return n;
    else    return (n%2) + DtoB(n/2)*10;
}

int main()
{
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;
    cout << "in Binary= " << DtoB(n);
    return 0;
}
