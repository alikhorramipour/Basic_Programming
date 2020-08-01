#include <iostream>
#include <string>

using namespace std;

void doPrint(char string[])
{
	for (int i = 0; string[i]; i++)
		printf("%c", string[i]);
}

int compare(string first, string second)
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

void swapStr(string* str1, string* str2)
{
	string temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}


float calBMI(int mass, float height)
{
	return (float)mass/(height * height);
}

int checkFinish(string input)
{
	if (input == "FiNiSh")
		return 1;
}
  
/*void bubbleSort(char names[], float BMI[], int siz)
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
*/

int main()
{
    string names[100];
	int mass[100], siz;
	float height[100], BMI[100];
	for (int i = 0; i<100; i++)
	{
		cout << "Please enter name number#" << i << ": ";
		cin >> names[i];
		if (checkFinish(names[i]))
		{
			siz = i;
			break;
		}
		cout << "Please enter mass(kg) number#" << i << ": ";
		cin >> mass[i];
		cout << "Please enter height(meter) number#" << i << ": ";
		cin >> height[i];
		BMI[i] = calBMI(mass[i], height[i]);
	}
	//bubbleSort(names, BMI, siz);
	int temp;
	float bsorted=0;
    for(int pass=0; pass<siz && !bsorted; pass++)
    {
        for(int i=0, bsorted=1; i<siz-pass-1; i++)
        {
            if(BMI[i] > BMI[i+1])
            {
                temp = BMI[i+1];
                BMI[i+1] = BMI[i];
                BMI[i] = temp;
                swapStr(&names[i], &names[i+1]);
                bsorted = 0;
            }
        }
    }
	
	for(int i=0; i<siz; i++)
	{
        cout << "names[" << i << "] = " << names[i] << " and BMI[" << i << "] = " << BMI[i] << endl;
	}
	return 0;
	
}
