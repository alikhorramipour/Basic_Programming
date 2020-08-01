#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *input2 = fopen("input2.bmp", "rb");
	if (!input2)
	{
		printf("Cannot read from file!");
		getch();
		return 0;
	}
	int counter = 0;
	char i[154], ch;
	while (counter<154)
	{
		ch = getc(input2);
		i[counter] = ch;
		counter++;
	}
	char color[50][50][3];
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			color[i][j][0] = getc(input2);
			color[i][j][1] = getc(input2);
			color[i][j][2] = getc(input2);
		}
	}
	counter = 0;
	FILE *output = fopen("output.bmp", "wb");
	while (counter < 154)
	{
		fprintf(output, "%c", i[counter]);
		counter++;
	}
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			fprintf(output, "%c", color[i][j][0]+100);
			fprintf(output, "%c", color[i][j][1]+100);
			fprintf(output, "%c", color[i][j][2]+100);
		}
	}
	fclose(input2);
	fclose(output);
	system("pause");
	return 0;
}