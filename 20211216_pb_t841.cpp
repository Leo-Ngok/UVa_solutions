#include <cstdio>
int n,end=0, curr_len=0,s=0,t;
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
inline int _max(int a,int b)
{
    return (a>b)?a:b;
}
int main(int argc, char **argv)
{
    n=read();
    for(int i=0;i<n-1;i++)
    {
        t=read();
        curr_len=_max(curr_len,i+t);
        if(i==end)
        {
            s++;
            end=curr_len;
        }
    }
    printf("%d",s);
    return 0;
}