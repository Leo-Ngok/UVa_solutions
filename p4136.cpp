//p4136
#include <cstdio>
int main(){
	int n;
	while(scanf("%d",&n)&&n){
		if(n&1)printf("Bob\n");
		else printf("Alice\n");
	}
	return 0;
} 
