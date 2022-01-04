#include<cstdio>
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
long long gcd(long long n,long long m){return (n%m==0)?m:gcd(m,n%m);} 
void exgcd(long long a,long long b,long long &x,long long &y)
{
    if(!b)
    {x=1;y=0;return;}
    long long p;
    exgcd(b,a%b,x,y);
    p=x;x=y;y=p-(a/b)*y;return;
} 
int t;
int main()
{
    t=read();
    while(t--)
    {
        long long x=0,y=0,a,b,c,g,xin,yin,xax,yax,npa=0,k; 
        a=read();b=read();c=read();g=gcd(a,b);
        if(c%g!=0)printf("-1\n"); 
        else{
            a/=g;b/=g;c/=g;exgcd(a,b,x,y);
            x*=c;y*=c; 
            for(int i=1;i<=2;i++)
            if(x<=0){
                k=-(x/b)+1;
                x+=k*b;y-=k*a;
                xin=x;yax=y;
            }else if(y<=0){
                k=-(y/a)+1;
                x-=k*b;y+=k*a;
                yin=y;xax=x;
            }
			if(x>0&&y>0){
                if(x%b!=0){xin=x%b;yax=y+a*(x/b);}
                else{xin=x%b+b;yax=y+a*(x/b-1);}
                
                if(y%a!=0){yin=y%a;xax=x+b*(y/a);}
                else{yin=y%a+a;xax=x+b*(y/a-1);} 
                npa=(xax-xin)/b+1; 
            }
            if(!npa)
            printf("%lld %lld\n",xin,yin);
            else printf("%lld %lld %lld %lld %lld\n",npa,xin,yin,xax,yax); 
        }
    }
    return 0;
}
