#include <cstdio>
#define MOD 1000000007
int n,fib[1000005];
int main()
{
    fib[0]=0,fib[1]=1;
    scanf("%d",&n);
    if(n%3==1)printf("1");
    else
    {
        for(int i=2;i<=1000005;i++)fib[i]=(fib[i-1]%MOD+fib[i-2]%MOD)%MOD;
        if(n%3==0)n++;
        printf("%d",fib[n]+1);
    }
    return 0;
}