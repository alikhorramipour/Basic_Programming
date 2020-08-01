#include <stdio.h>
struct hesab
{
    char names[100];
    float ma;
    float he;
    float bmi;
};
float bmii(float a,float b);
int main()
{
    struct hesab x[100];
    int a=0,i,c=0,q;
    struct hesab p;
    for(i=0;i<100;i++)
    {
        scanf("%s",x[i].names);
        c=finish(x,i);
        if (c==1) break;
        scanf("%f",&x[i].ma);
        scanf("%f",&x[i].he);
        x[i].bmi=bmii(x[i].ma,x[i].he);
        a++;
    }
    for(i=a-2;i>=0;i--)
    {
        for(q=0;q<=i;q++)
        {
            if (x[q].bmi<x[q+1].bmi)
            {
                p=x[q];
                x[q]=x[q+1];
                x[q+1]=p;
            }
        }
    }
    chap(x,a);

}
int finish (struct hesab x[],int i)
{
    if (x[i].names[0]=='f')
    {
        if(x[i].names[1]=='i')
        {
            if(x[i].names[2]=='n')
            {
                if(x[i].names[3]=='i')
                {
                    if (x[i].names[4]=='s')
                    {
                            if (x[i].names[5]=='h')
                            {
                                return 1;
                            }
                    }
                }
            }
        }
    }
    return -1;
}
float bmii(float a,float b)
{
    float c;
    c=a/(b*b);
    return c;
}
void chap (struct hesab x[],int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        printf("%s ",x[i].names);
        printf("%f\n",x[i].bmi);
    }
}
