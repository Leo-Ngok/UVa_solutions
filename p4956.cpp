//p4956
#include <cstdio>
int main(){
	int n;scanf("%d",&n);n/=364;
	for(int x=100;x>=0;x--){
		if((n-x)%3==0&&n>x){
			printf("%d\n%d",x,(n-x)/3);return 0;
		}
	}
	return 0;
}
