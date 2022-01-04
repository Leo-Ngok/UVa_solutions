//p3156
#include <cstdio>
int arr[2000010];
int n,m,x;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",arr+i);
	while(m--){
		scanf("%d",&x);
		printf("%d\n",arr[x]);
	}
	return 0;
}
