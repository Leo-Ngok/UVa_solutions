//p2722
#include <cstdio>
int a[10001],b[10001],f[100001],V,n;
int max(int a,int b){
	return(a>b)?a:b;
}
int main(){
	scanf("%d %d",&V,&n);
	for(int i=1;i<=n;i++)scanf("%d%d",b+i,a+i);
	//a is mark,b is time
	for(int j=1;j<=n;j++)
	for(int k=b[j];k<=V;k++)//if you want 01 knapsack, just reverse the step condition
	f[k]=max(f[k],f[k-b[j]]+a[j]);
	printf("%d",f[V]);return 0;
} 
