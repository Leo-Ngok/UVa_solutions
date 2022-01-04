#include <cstdio>
 
int dp[1002][1002],H[1002][1002],V[1002][1002],n,m;
inline int _max(int a,int b)
{
    return (a>b)?a:b;
}
int main(int argc,char **argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    scanf("%d",&H[i][j]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    scanf("%d",&V[i][j]);
    dp[0][0]=0;
    for(int i=1;i<n;i++)
    dp[i][0]=V[i-1][0]+dp[i-1][0];
    for(int j=1;j<m;j++)
    dp[0][j]=H[0][j-1]+dp[0][j-1];
 
    for(int i=1;i<n;i++)
    for(int j=1;j<m;j++)
    dp[i][j]=_max(dp[i][j-1]+H[i][j-1],dp[i-1][j]+V[i-1][j]);
    
    printf("%d",dp[n-1][m-1]);
    return 0;
}