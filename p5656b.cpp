//p5656b
#include<cstdio>
using namespace std;
int read()
{
    int res=0;
    char c;
    c=getchar();
    while(c<'0'||c>'9')
    c=getchar();
    while(c>='0'&&c<='9')
    {
        res=res*10+c-48;
        c=getchar();
    }
    return res;
}
long long gcd(long long n,long long m)
{
    return (n%m==0)?m:gcd(m,n%m);
}
void exgcd(long long a,long long b,long long &x,long long &y)
{
    if(!b){x=1;y=0;return;}
    long long p;
    exgcd(b,a%b,x,y);
    p=x;x=y;y=p-(a/b)*y;return;
}
int t;
int main(){
    t=read();
    while(t--){
        long long x=0,y=0,a,b,c,g,xin,yin,xax,yax,npa=0,k;
        a=read();b=read();c=read();
        g=gcd(a,b);
        if(c%g!=0) printf("-1\n");
        else{
            a/=g;b/=g;c/=g;
            exgcd(a,b,x,y);
            x*=c;y*=c;
            xin=x>0&&x%b!=0?x%b:x%b+b;//若x>0且x%b!=0，x的最小正整?解就等于x%b，否??需要在x%b的基?上加b。 
            yax=(c-xin*a)/b;//求出??的y的最大正整?解。 
            yin=y>0&&y%a!=0?y%a:y%a+a;
            xax=(c-yin*b)/a;//同理于x。 
            if(xax>0)//判?有?正整?解。 
            npa=(xax-xin)/b+1;//求出正整?解的?量。 
            if(!npa)
            printf("%lld %lld\n",xin,yin);
            else printf("%lld %lld %lld %lld %lld\n",npa,xin,yin,xax,yax);
        }
    }
    return 0;
}
