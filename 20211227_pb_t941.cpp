#include <cstdio>
#define MAX 1048576
#define HALF 524288
int n,m,state[MAX],tmp=0,num[50002],k=0,ans=0;
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
int main(int argc,char **argv)
{
    n=read();m=read();
    for(register int i=0;i<n;i++)
    {
        tmp=0;
        for(register int j=0;j<m;j++)
        {
            tmp=(tmp<<1)+read();
        }
        if(state[tmp]==0)
        {
            num[k++]=tmp;
            state[tmp]=1;
        }
        else
        {
            state[tmp]++;
        }
    }
    int _max_elem=(1<<m)-1;
    for(register int i=0;i<k;i++)
    {
        if(num[i]<(1<<(m-1)))
        {
            ans+=state[num[i]]*state[num[i]^_max_elem];
        }
    }
    printf("%d",ans);
    return 0;
}