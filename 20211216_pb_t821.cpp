#include <cstdio>
#include <cstdlib>
int n,arr[10000005];
long long s1=0;
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
inline int cmp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}
int main(int argc, char **argv)
{
    n=read();
    for(int i=0;i<n;i++)
    {
        arr[i]=read();
    }
    qsort(arr,n,sizeof(int),cmp);
    int w=n>>1;
    for(int i=0;i<w;i++)
    {
        s1-=arr[i];
        s1+=arr[n-i-1];
    }
    if(n&1)s1+=arr[w];
    printf("%lld",s1);
    return 0;
}