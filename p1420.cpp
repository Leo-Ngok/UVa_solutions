//p1420
#include <cstdio>
int arr[10010],n,curr=1,ans=1;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",arr+i);
	for(int i=2;i<=n;i++){
		if(arr[i]-arr[i-1]==1){
			curr++;
			if(curr>ans)ans=curr;
		}
		else curr=1;
	}
	printf("%d",ans);
	return 0;
}
