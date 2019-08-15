#include <cstdio>
int main()
{
   int n,a,b,c,x;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       scanf("%d %d %d",&a,&b,&c);
       if(a>c){x=a;a=c;c=x;}
       if(b>c){x=b;b=c;c=x;}
       if(b<a){x=b;b=a;a=x;}
       printf("Case %d: %d\n",i,b);
   }
}