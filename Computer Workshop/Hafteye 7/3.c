#include <stdio.h>

void doPrint(char string[])
{
	for (int i = 0; string[i]; i++)
		printf("%c", string[i]);
}

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

void swap(char ch1[], char ch2[])
{
	char temp;
	for (int i = 0; i < 100; i++)
	{
		temp = ch1[i];
		ch1[i] = ch2[i];
		ch2[i] = temp;
	}
}

float calBMI(int mass, float height)
{
	return (float)mass/(height * height);
}

int checkFinish(char input[])
{
	if (input == "FiNiSh")
		return 1;
}
  
void bubbleSort(char names[], float BMI[], int siz)
{
	int pass, bsorted=0, temp;
    for(pass=0; pass<siz && !bsorted; pass++)
    {
        for(int i=0, bsorted=1; i<siz-pass-1; i++)
        {
            if(BMI[i] > BMI[i+1])
            {
                temp = BMI[i+1];
                BMI[i+1] = BMI[i];
                BMI[i] = temp;
                swap(names[i], names[i+1]);
                bsorted = 0;
            }
        }
    }
} 
int main()
{
    char names[100][100];
	int mass[100], siz;
	float height[100];
	float BMI[100];
	for (int i = 0; i<100; i++)
	{
		doPrint("Please enter name number#");
		printf("%d: ", i);
		scanf("%s", &names[i]);
		printf("%d: ", checkFinish(names[i]));
		if (checkFinish(names[i]))
		{
			siz = i;
			break;
		}
		doPrint("Please enter mass(kg) number#");
		printf("%d: ", i);
		scanf("%d", &mass[i]);
		doPrint("Please enter height(meter) number#");
		printf("%d: ", i);
		scanf("%f", &height[i]);
		BMI[i] = calBMI(mass[i], height[i]);
	}
	bubbleSort(names, BMI, siz);
	for(int i=0; i<siz; i++)
	{
        printf("names[%i] = %s and BMI[i] = %f", i, names[i], i, BMI[i]);
	}
	return 0;
	
}
