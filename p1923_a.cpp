//p1923
#include <cstdio>
#include <algorithm>
int arr[5000010],k,n;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)scanf("%d",arr+i);
	std::sort(arr,arr+n);
	printf("%d",arr[k]);
	return 0;
}
