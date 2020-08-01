//A.Khorrami Pour - 9631407
#include<stdio.h>

#define LEN 1000

int main()
{
    int size = 0;
    char str[LEN];
    printf("Enter the String: ");
    scanf("%s", str);
    int i;
    for(i=0; str[i]; i++)
        size++;
    char temp;
    for(i=0; i<size/2; i++)
    {
        temp = str[i];
        str[i] = str[size-1-i];
        str[size-1-i] = temp;
    }
    printf("The String Mirrored is %s", str);
    return 0;
}
