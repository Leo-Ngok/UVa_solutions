#include <stdio.h>
long long t0,n,t,inc=0,exc=0,inc1=0,exc1=0,excn,excn1;
inline long long read()
{
    long long s=0,t=1;char c=getchar();
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
inline long long _max(long long a,long long b)
{
    return (a>b)?a:b;
}
int main()
{
    n=read();t0=read();
    for(register int i=2;i<=n;i++)
    {
        t=read();
        excn=_max(exc,inc);
        inc=exc+t;
        exc=excn;
        if(i>=3&&i<=n-1)
        {
            excn1=_max(exc1,inc1);
            inc1=exc1+t;
            exc1=excn1;
        }
    }
    printf("%lld",_max(_max(inc,exc),t0+_max(inc1,exc1)));
    return 0;
}
