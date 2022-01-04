//p1534
#include <cstdio>
int main(){
	int n;scanf("%d",&n);
	int s=0;
	while(n--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a+b>8)s+=a+b-8;
	}
	printf("%d",-s);return 0;
}
