//p5726
#include <cstdio>
#include <algorithm>
int n,arr[1010],sum;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",arr+i);
	std::sort(arr+1,arr+n+1);
	for(int i=2;i<=n-1;i++)sum+=arr[i];
	printf("%.2lf",(double)sum/(n-2));
	return 0;
}
