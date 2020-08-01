#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct patient
{
	char pname[50];
	char illness[50];
	int id;
}

struct patient p_arr[100];

typedef struct
{
	char hname[50];
	struct patient;
}

struct hospital h_arr[30];

int main()
{
	FILE *input = fopen("input.txt", "r");
	if (!input)
	{
		printf("Cannot read from file!");
		getch();
		return 0;
	}
	string s;
	int i;
	for (i = 0; i < 26 && (!feof(input); i++)
	{
		s = fscanf(output, "%c", j[k + 1]);
		h_arr[i].hname = s;
		s = gets(input);
		for (int j = 0; s[j]; j++)
		{
			/*for (int k = 0; s[k] != ','; k++)
			{
			h_arr[i].hname
			}*/
		}

	}

	FILE *output = fopen("output.txt", "w");
	fprintf(output, "%s", "\\\\\\\\\\");
	fclose(input);
	fclose(output);
	system("pause");
	return 0;
}