#include <cstdio>
int n,k,*arr;
long long _minsum=-1,_maxsum=0,ans=0,_midsum;
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
inline bool judge(long long sum)
{
    long long partial=0;
    int freq=1;
    for(register int i=0;i<n;i++)
    {
        if(partial+arr[i]<=sum)partial+=arr[i];
        else 
        {
            partial=arr[i];
            freq++;
            if(freq>k)return false;
        }
    }
    return (freq<=k);
}
int main(int argc,char** argv)
{
    n=read();k=read();
    arr=new int[n];
    for(register int i=0;i<n;i++)
    {
        arr[i]=read();
        if(arr[i]>_minsum)_minsum=arr[i];
        _maxsum+=arr[i];
    }
    while(_minsum<_maxsum)
    {
        _midsum=_minsum+(_maxsum-_minsum)/2;
        if(judge(_midsum))
        {
            _maxsum=_midsum;
            ans=_midsum;
        }
        else
        {
            _minsum=_midsum+1;
        }
    }
    printf("%lld",ans);
    return 0;
}