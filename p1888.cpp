//p1888
#include <cstdio>
#include <algorithm>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int s[3]={a,b,c};
	std::sort(s,s+3);
	int g=std::__gcd(s[0],s[2]);
	printf("%d/%d",s[0]/g,s[2]/g);
	return 0;
}
