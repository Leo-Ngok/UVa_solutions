//p1031
#include <cstdio>
int nums[10010];
int n,mean=0,cnt=0;
int main(){
	scanf("%d",&n);
	for(int k=0;k<n;k++){
		scanf("%d",nums+k);
		mean+=nums[k];
	}
	mean/=n;
	for(int k=0;k<n;k++){
		nums[k]-=mean;
	}
	for(int k=0;k<n-1;k++){
		if(nums[k]==0)continue;
		nums[k+1]+=nums[k];
		cnt++;
	}
	printf("%d",cnt);
}
