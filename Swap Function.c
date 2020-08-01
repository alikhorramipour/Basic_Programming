#include<stdio.h>

void swap(int* a, int* b)
{
    int* tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int max, min, c;
    scanf("%d%d%d", &max, &min, &c);
    if(max < min) swap(&max, &min);
    printf("%d, %d", max, min);
}
