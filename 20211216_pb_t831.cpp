#include <cstdio>
int n,prev,t,next,sum=0,buy,sell;
bool hold=0;
inline int read()
{
    int s=0,t=1;char c=getchar();
    while(c<'0'||c>'9')
    {
        if(c=='-')t=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        s=s*10+(c-'0');
        c=getchar();
    }
    return s*t;
}
int main(int argc, char **argv)
{
    n=read();
    prev=read();
    if(n==1)printf("0");
    else if(n==2)
    {
        t=read();
        if(t>=prev)printf("%d",t-prev);
        else printf("0");
    }
    else
    {
        t=read();
        if(t>prev)
        {
            hold=1;
            buy=prev;
        }
        for(register int i=3;i<=n;i++)
        {
            next=read();
            if(!hold)
            {
                if(prev>=t&&t<next)
                {
                    hold=1;
                    buy=t;
                }
            }
            else
            {
                if(prev<=t&&t>next)
                {
                    sum+=t-buy;
                    hold=0;
                }
                else if(i==n)
                {
                    sum+=next-buy;
                    hold=0;
                }
            }
            prev=t;
            t=next;
        }
        //if(hold)
        {
        //    sum+=next-buy;
        }
        printf("%d",sum);
    }
    return 0;
}