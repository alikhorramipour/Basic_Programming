#include <stdio.h>
#include <conio.h>
//#include <iostream>

int compare(char first[], char second[])
{
	for (int i = 0; first[i] || second[i]; i++)
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

int checkFinish(char input[])
{
	if (input == "FiNiSh")
		return 1;
}

void bubbleSort(char str[], int siz)
{
	char temp[100];
	for (int i = 0; i<siz - 1; i++)
	{
		for (int j = 0; str[i][j]; j++)
		{
			if (compare(str[i], str[i + 1]) == 1)
			{
				swap(str[i], str[i+1]);
			}
		}
	}
}

void doPrint(char string[])
{
	for (int i = 0; string[i]; i++)
		printf("%c", string[i]);
}

void swap(char* ch1, char* ch2)
{
	char temp;
	for (int i = 0; i < 100; i++)
	{
		temp = *ch1[i];
		*ch1[i] = *ch2[i];
		*ch2[i] = temp;
	}
}

int main()
{
	char str[100][100];
	int n, siz = 0;
	doPrint("Please enter number of strings(Max. 100): ");
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		doPrint("Please enter string number#");
		printf("%d: ", i);
		scanf("%s", &str[i]);
		if (checkFinish(str[i]))
		{
			siz = i - 1;
			break;
		}
	}
	char temp;
	for (int i = 0; i<siz - 1; i++)
	{
		for (int j = 0; str[i][j]; j++)
		{
			if (compare(str[i], str[i + 1]) == 1)
			{
				for (int k = 0; k < 100; k++)
				{
					temp = str[i][k];
					str[i][k] = str[i+1][k];
					str[i + 1][k] = temp;
				}
			}
		}
	}
	for (int i = 0; i<siz; i++)
	{
		doPrint(str[i]);
		doPrint("\n");
	}
	_getch();
	return 0;
}
