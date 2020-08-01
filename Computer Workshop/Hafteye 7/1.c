#include <stdio.h>
#include <conio.h>
#include <iostream>

void replace(char str[], char ch1, char ch2);
bool isMirrored(char string[], int siz);
void doPrint(char string[]);
int main()
{ 
	char str[100], source_letter, target_letter;
	int siz=0;
	doPrint("Enter the String: ");
	std :: cin >> str;
	for (int i = 0; str[i]; i++)
		siz++;
	if (!isMirrored(str, siz))
	{
		doPrint("Not Palindrome!\n");
		doPrint("Enter Source Letter: ");
		std::cin >> source_letter;
		doPrint("Enter Target Letter: ");
		std::cin >> target_letter;
		replace(str, source_letter, target_letter);
		doPrint(str);
	}
	else
	{
		doPrint(str);
		doPrint(" is Palindrome!");
	}
	_getch();
	return 0;
} 
void replace(char string[], char source_letter, char target_letter)
{ 
	for (int i = 0; string[i]; i++)
		if (string[i] == source_letter) string[i] = target_letter;
} 
bool isMirrored(char string[],int siz)
{ 
	bool flag = 1;
	for (int i = 0; i<siz/2; i++)
	{
		if (string[i] != string[siz - i - 1])
			flag = 0;
	}
	return flag;
}
void doPrint(char string[])
{
	for (int i = 0; string[i]; i++)
		printf("%c", string[i]);
}