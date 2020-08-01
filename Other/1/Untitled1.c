#include <stdio.h>
#include <conio.h>
int main()
{
    char x[100];
    char b1,b2,b3;
    scanf("%s", x);
    scanf("%c",&b1);
    scanf("%c",&b2);
    scanf("%c",&b3);
    int a=0;
    int i,c;
    for(i=0;i<100;i++)
    {
        if (x[i]=='\0') break;
        a++;
    }
    c=baraks(x,a);
    if (c==1)
    {
    chap(x,c,a);
    return 0;
    }
    taghir(x,a,b2,b3);
    chap(x,c,a);

}
int baraks(char x[],int a)
{
    int i,j=a-1;
    for(i=0;i<a;i++)
    {
        if (x[i]!=x[j])
        {
            return -1;
        }
        j--;
    }
    return 1;
}
void taghir (char x[],int a,char c1,char c2)
{
    int i;
    for(i=0;i<a;i++)
    {
        if (x[i]==c1)
        {
            x[i]=c2;
            i++;
        }
        if (x[i]==c2)
        {
            x[i]=c1;
            i++;
        }
    }
}
void chap (char x[],int c,int a)
{
    if (c==1) printf("Yes it is");
    if (c==-1)
    {
        printf("NO\n");
        puts(x);
    }
}
