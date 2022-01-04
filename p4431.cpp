//p4431
#include <cstdio>
int n,m,k;
int main(){
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&m);
		printf("%d\n",(n>m)?2*(m-1):2*(n-1));
	}
	return 0;
}
