#include <stdio.h>
struct peyda
{
    char name[100];
    int loc;
};
void chap(struct peyda y[],int n);
void check(struct peyda y[],int n,char x[],int a);
int main()
{
    int n,a=0,i,q;
    scanf("%d",&n);
    char x[100];
    scanf("%s",x);
    for(i=0;i<100;i++)
    {
        if (x[i]=='\0') break;
        a++;
    }
    struct peyda y[100],d;
    for(i=0;i<n;i++)
    {
        scanf("%s",y[i].name);
    }
    check(y,n,x,a);
    for(i=n-2;i>=0;i--)
    {
        for(q=0;q<=i;q++)
        {
            if (y[q].loc<y[q+1].loc)
            {
                d=y[q];
                y[q]=y[q+1];
                y[q+1]=d;
            }
        }
    }
    chap(y,n);
}
void check(struct peyda y[],int n,char x[],int a)
{
    int i,q,k,d=1,h;
    for(i=0;i<n;i++)
    {
        h=0;
        d=1;
        for(q=0;q<100;q++)
        {
            if (y[i].name[q]=='\0')
            {
                y[i].loc=-1;
                break;
            }
            if (y[i].name[q]==x[0])
            {
                for(k=1;k<a;k++)
                {
                    if (y[i].name[q+d]!=x[k])
                    {
                        d=1;
                        break;
                    }
                    if (y[i].name[q+d]==x[k])
                    {
                        d++;
                    }
                    if (k==a-1)
                    {
                        y[i].loc=q+1;
                        h=1;
                        break;
                    }
                }
            }
            if (h==1) break;
        }
    }
}
void chap(struct peyda y[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (y[i].loc!=-1)
        {
            printf("%s,",y[i].name);
            printf("%d\n",y[i].loc);
        }
    }
}
