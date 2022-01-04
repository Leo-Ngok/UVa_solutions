//p1029
#include <cstdio>

int main(){
	int n;scanf("%d",&n);
	while(n--){
		int x,y;scanf("%d%d",&x,&y);
		printf(y%x?"-1\n":"%d %d\n",x,y);		
	}	
	return 0;
}
