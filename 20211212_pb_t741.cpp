#include <cstdio>
int a,n,m1,m2;
inline int _max(int a, int b)
{
    return (a>b)?a:b;
}
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
int main(int argc,char** argv)
{
    n=read();a=read();
    n--;
    m1=m2=a;
    while(n--)
    {
        a=read();
        m1=_max(a,m1+a);
        m2=_max(m1,m2);
    }
    printf("%d",m2);
    return 0;
}
