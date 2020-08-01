#include <iostream>
#include <string>

using namespace std;

int checkString(string input, string name)
{
	bool flag;
	for(int i=0; input[i]; i++)
	{
		if(input[i] == name[0])
		{
			flag = 1;
			for(int j=0; name[j]; j++)
			{
				if(input[i+j] != name[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag)
		{
			return i;
		}
	return -1;
	}
}

void swapStr(string* str1, string* str2)
{
	string temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

/*void bubbleSort(string strs[], int location[], int siz)
{
	bool bsorted=0;
	int temp;
    for(int pass=0; pass<siz && !bsorted; pass++)
    {
        for(int i=0, bsorted=1; i<siz-pass-1; i++)
        {
            if(location[i] > location[i+1])
            {
                temp = location[i+1];
                location[i+1] = location[i];
                location[i] = temp;
                swapStr(&strs[i], &strs[i+1]);
                bsorted = 0;
            }
        }
    }
}
*/

int main()
{
	int n, location[100];
	string name, strs[100];
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter name: ";
	cin >> name;
	int j=0;
	for(int i=0; i<n; i++)
	{
		cout << "Enter String #" << i << ": ";
		cin >> strs[i];
		if(checkString(strs[i], name) != -1)
		{
			cout << checkString(strs[i], name) << "\n";
			location[j] = checkString(strs[i], name);
			j++;
		}
	}
	//bubbleSort(strs, location, j+1);
	bool bsorted=0;
	int temp;
    for(int pass=0; pass<=j && !bsorted; pass++)
    {
        for(int i=0, bsorted=1; i<=j-pass-1; i++)
        {
            if(location[i] > location[i+1])
            {
                temp = location[i+1];
                location[i+1] = location[i];
                location[i] = temp;
                swapStr(&strs[i], &strs[i+1]);
                bsorted = 0;
            }
        }
	}
	for(int i=0; i<=j; i++)
		cout << strs[i] << ", " << location[i] << "\n";
	return 0;
}
