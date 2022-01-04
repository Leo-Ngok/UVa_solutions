//u69096
#include <cstdio>
#define N 110
int b[N],a[N],n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",b+i);
		a[i]=b[i]-b[i-1];
	}
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}

