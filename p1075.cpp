//p1075
#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	for(int k=2;k<=n;k++){
		if(n%k==0) {
			printf("%d",n/k);
			break;
		}
	}
	return 0;
}
