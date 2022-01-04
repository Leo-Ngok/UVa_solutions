//p1464
#include <cstdio>
typedef long long LL;
long long wa[22][22][22],a,b,c;
long long w(long long a,long long b,long long c){
	if(a<=0||b<=0||c==0)return 1;
	if(a>20||b>20||c>20)return w(20,20,20);
	if(wa[a][b][c]==0){
		if(a<b&&b<c)wa[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		else wa[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	return wa[a][b][c];
}
int main(){
	while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF&&!(a==-1&&b==-1&&c==-1))
	printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
	return 0;	
}
