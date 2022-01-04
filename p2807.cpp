//p2807
#include <cstdio>
int main(){
	int t;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		int n;scanf("%d",&n);
		if(n%2==0)printf("%d",(2*n+1)*(n+2)*n/8);
		else printf("%d",(n+1)*(2*n*n+3*n-1)/8);
		//printf("%d\n",n*n+n*(n*n-1)/6);
	}
	return 0;
}
