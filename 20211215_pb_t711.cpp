#include <cstdio>
int n,init,M,t,k=-1;
bool dp[2][1010];
int main(int argc,char **argv)
{
    scanf("%d%d%d",&n,&init,&M);
    dp[0][init]=1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        for(int j=0;j<=M;j++)
        {
            if(j>=t)
            dp[i&1][j]=dp[!(i&1)][j-t];
            if(j+t<=M)
            dp[i&1][j]|=dp[!(i&1)][j+t];
            if(i==n&&dp[i&1][j])k=j;
        }
    }
    printf("%d",k);
    return 0;
}