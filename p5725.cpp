#include <cstdio>
int n;
void pnt(int n){
	printf((n<10)?"0%d":"%d",n);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n*n;i++){
		pnt(i);
		if(i%n==0)printf("\n");
	}
	printf("\n");
	int q=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)printf("  ");
		for(int j=1;j<=i;j++)pnt(q++);
		printf("\n");
	}
	return 0;
}
