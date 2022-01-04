//p5639
#include <cstdio>
int n,x,cnt=1,crt;
int main(){
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		scanf("%d",&x);
		if(k==1){
			crt=x;continue;
		}
		if(x!=crt){
			crt=x;cnt++;
		}
	}
	printf("%d",cnt);return 0;
}
