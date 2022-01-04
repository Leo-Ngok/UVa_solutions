#include <cstdio>
int n,cnt=1;
int main(){
	scanf("%d",&n);
	while(n>1){
		n>>=1;
		cnt++;
	}
	printf("%d",cnt);
}
