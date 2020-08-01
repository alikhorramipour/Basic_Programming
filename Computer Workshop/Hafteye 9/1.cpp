#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *input = fopen("input.txt", "r");
	if (!input)
	{
		printf("Cannot read from file!");
		getch();
		return 0;
	}
	int counter = 0;
	char i[52], ch, j[52];
	while (!feof(input))
	{
		ch = getc(input);
		i[counter] = ch;
		counter++;
	}
	for (int k = 0; k<51; k++)
	{
		printf("%c", i[k]);
		j[50 - k] = i[k];
	}
	FILE *output = fopen("output.txt", "w");
	for (int k = 0; k<50; k++)
	{
		fprintf(output, "%c", j[k+1]);
	}
	fclose(input);
	fclose(output);
	system("pause");
	return 0;
}