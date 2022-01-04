//u53525
#include <cstdio>
#define N 110
int a[N],b[N],n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)printf("%d ",b[i]);
	return 0;
} 
