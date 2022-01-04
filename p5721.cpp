//p5721
#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int c=1;
	for(int k=1;k<=n;k++){
		for(int j=1;j<=n-k+1;j++){
			if(c<10)printf("0%d",c);
			else printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
