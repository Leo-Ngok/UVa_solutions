//p1428
#include <cstdio>
int a[110],b[110],n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	for(int i=2;i<=n;i++)
	for(int j=1;j<i;j++)b[i]+=(a[i]>a[j]);
	for(int i=1;i<=n;i++)printf("%d ",b[i]);
	return 0;
} 
