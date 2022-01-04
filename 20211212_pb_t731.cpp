#include <cstdio>
int lis[1010],n,k=0,t;
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
    lis[k++]=read();
    for(int i=1;i<n;i++)
    {
        t=read();
        if(t>lis[k-1])
        {
            lis[k++]=t;
        }
        else if(t<lis[0])
        {
            lis[0]=t;
        }
        else
        {
            int l=0,r=k;
            while(l<r)
            {
                int m=((r+l)>>1);
                if(t<=lis[m])
                {
                    r=m;
                }
                else
                {
                    l=m+1;
                }
            }
            lis[l]=t;
        }
    }
    printf("%d",k);
    return 0;
}