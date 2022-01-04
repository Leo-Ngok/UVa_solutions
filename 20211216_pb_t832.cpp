#include <cstdio>
int n,prev,t,next,sum=0,buy;
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
    
    if(n==1)printf("0");
    else if(n==2)
    {
        prev=read();
        t=read();
        if(t>=prev)printf("%d",t-prev);
        else printf("0");
    }
    else
    {
        prev=read();
        t=read();
        if(prev<t)
        {
            hold=1;
            buy=prev;
        }
        for(int u=2;u<n;u++)
        {
            next=read();
            if(hold)
            {
                if(prev<=t&&t>next)
                {
                    hold=0;
                    sum+=t-buy;
                }
            }
            else
            {
                if(prev>=t&&t<next)
                {
                    hold=1;
                    buy=t;
                }
            }
            prev=t,t=next;
        }
        if(hold)
        {
            sum+=next-buy;
        }
        printf("%d",sum);
    }
    return 0;
}