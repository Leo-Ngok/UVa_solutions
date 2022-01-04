#include <cstdio>
#include <cmath>
int n,k,t1;

int _fpow(int a,int t)
{
    int s=1;
    while(t)
    {
        if(t&1)s=(s%1000)*(a%1000)%1000;
        a=(a%1000)*(a%1000)%1000;
        t>>=1;
    }
    return s%1000;
}
int main(int argc,char **argv)
{
    scanf("%d",&t1);
    while(t1--)
    {
        scanf("%d%d",&n,&k);
        double x= k*log10(n);
        int _x1=(int)x;
        double ddt;
        if(_x1>1) ddt=pow(10,x-_x1)*100;
        else ddt=pow(10,x);
        printf("%03d %03d\n",(int)(ddt+0.000001),_fpow(n,k));
    }
    return 0;
}