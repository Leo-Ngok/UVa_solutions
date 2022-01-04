//p1097
#include <algorithm>
#include <cstdio>
int num[200010];
int n;
int cnt=1;
int main(){
	scanf("%d",&n);
	for(int k=1;k<=n;k++)scanf("%d",num+k);
	std::sort(num+1,num+1+n);
	for(int i=2;i<=n;i++){
		if(num[i]!=num[i-1]){
			printf("%d %d\n",num[i-1],cnt);
			cnt=1;
		}
		else cnt++;
	}
	printf("%d %d",num[n],cnt);
	return 0;
}
