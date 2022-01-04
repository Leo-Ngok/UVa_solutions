//p3150
#include <cstdio>
int main(){
	int n;scanf("%d",&n);
	while(n--){
		int num;scanf("%d",&num);
		if(num%2==0) printf("pb wins\n");
		else printf("zs wins\n");
	}
	return 0;
}
