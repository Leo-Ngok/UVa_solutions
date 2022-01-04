//p1795
#include <cstdio>
#include <math.h>
int main(){
	int n;scanf("%d",&n);
	while(n--){
		int m;scanf("%d",&m);
		int x=sqrt(8*m-7);
		if(x*x==8*m-7&&x%2!=0)printf("1\n");
		else printf("0\n");
	}
	return 0;
}
