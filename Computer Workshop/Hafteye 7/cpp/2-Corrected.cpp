#include <iostream>
#include <string>

using namespace std;

void swapStr(string* str1, string* str2)
{
	string temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int strCompare(string first, string second)
{
	for (int i = 0; (first[i] || second[i]); i++)
	{
		if (first[i] > second[i])
			return 1;
		else if (first[i] < second[i])
			return -1;
		else if (first[i] == second[i])
			i++;
	}
	return 0;
}

int checkFinish(string input)
{
	if (input == "FiNiSh")
		return 1;
	return 0;
}

/*void bubbleSort(string str[], int siz)
{
	for (int i = 0; i<siz - 1; i++)
	{
		for (int j = 0; str[i][j]; j++)
		{
			if (compare(str[i], str[i + 1]) == 1)
			{
				swapStr(&str[i], &str[i+1]);
			}
		}
	}
}*/

void doPrint(string str)
{
	for (int i = 0; str[i]; i++)
		cout << str[i];
}


int main()
{
	string str[100];
	int n, siz = 0;
	doPrint("Please enter number of strings(Max. 100): ");
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Please enter string number#" << i << ": ";
		cin >> str[i];
		siz++;
		if (checkFinish(str[i]) == 1)
		{
			siz--;
			break;
		}
	}
	cout << siz << endl;
	//bubbleSort(str, siz);
	for (int i = 0; i<siz-1; i++)
	{
		for (int j = 0; j<siz-1; j++)
		{
			if (strCompare(str[i], str[i + 1]) == 1)
			{
				swapStr(&str[i], &str[i+1]);
			}
		}
	}
	for (int i = 0; i<siz; i++)
		cout << str[i] << "\n";
	return 0;
}

