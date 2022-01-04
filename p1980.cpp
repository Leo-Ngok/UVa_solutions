//p1980
#include <cstdio>
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int count=0;
	for(int k=1;k<=n;k++){
		int j=k;
		while(j>0){
			if(j%10==x)count++;
			j/=10;
		}
	}
	printf("%d",count);
	return 0;
}
