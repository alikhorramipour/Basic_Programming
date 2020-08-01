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
	char i[10000], ch;
	while (!feof(input))
	{
		ch = getc(input);
		i[counter] = ch;
		counter++;
	}
	FILE *output = fopen("output.txt", "w");
	for (int k = counter-2; k>=0; k-=2)
	{
		fprintf(output, "%c", i[k]);
	}
	fclose(input);
	fclose(output);
	system("pause");
	return 0;
}