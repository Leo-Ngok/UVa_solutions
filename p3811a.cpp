//p3811a
#include<cstdio>
#define ll long long
int n,p;
int exgcd (ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int r=exgcd (b,a%b,x,y);
    int tmp=x;
    x=y;
    y=tmp-a/b*y;
    return r;
}
int main()
{
    scanf ("%d%d",&n,&p);
    for (int i=1;i<=n;i++)
    {
        ll x,y;
        exgcd (i,p,x,y);
        x=(x+p)%p;
        printf ("%d\n",x);
    }
    return 0;
}
