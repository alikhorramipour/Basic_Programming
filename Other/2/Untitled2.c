#include <stdio.h>
struct name{
char esm[100];};
int main()
{
    struct name x[100];
    struct name p;
    int a=0,i,q;
    int c=0,d=0;
    for(i=0;i<100;i++)
    {
        scanf("%s",x[i].esm);
        c=finish(x,i);
        if (c==1) break;
        a++;
    }
    for(i=a-2;i>=0;i--)
    {
        for(q=0;q<=i;q++)
        {
            if (x[q].esm[0]>x[q+1].esm[0])
            {
                p=x[q];
                x[q]=x[q+1];
                x[q+1]=p;
            }
        }
    }
    chap(x,a);

}
int finish (struct name x[],int i)
{
    if (x[i].esm[0]=='f')
    {
        if(x[i].esm[1]=='i')
        {
            if(x[i].esm[2]=='n')
            {
                if(x[i].esm[3]=='i')
                {
                    if (x[i].esm[4]=='s')
                    {
                            if (x[i].esm[5]=='h')
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
void chap(struct name x[],int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        printf("%s\n",x[i].esm);
    }
}
