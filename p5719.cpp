//p5719
#include <cstdio>
int n,k,tt,s1,s2;
int main(){
	scanf("%d%d",&n,&k);
	tt=n/k;
	s1=k*(1+tt)*tt/2;
	s2=(1+n)*n/2-s1;
	printf("%.1f %.1f",(double)s1/tt,(double)s2/(n-tt));
	return 0;
}
