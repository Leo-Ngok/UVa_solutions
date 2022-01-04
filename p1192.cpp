#include <cstdio>
int num[100010]={1};
int n,k;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<k;i++)
	for(int j=0;j<i;j++)
	num[i]+=num[j],num[i]%=100003;
	for(int i=k;i<=n;i++)
	for(int j=i-k;j<i;j++)num[i]+=num[j],num[i]%=100003;
	printf("%d",num[n]%100003);
	return 0;
}
