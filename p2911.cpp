//p2911
#include <cstdio>
int ans[100];
int s1,s2,s3,maxn=0,idx;
int main(){
	scanf("%d%d%d",&s1,&s2,&s3);
	for(int i=1;i<=s1;i++)
	for(int j=1;j<=s2;j++)
	for(int k=1;k<=s3;k++)
	ans[i+j+k]++;
	for(int i=3;i<=s1+s2+s3;i++)
	if(ans[i]>maxn)maxn=ans[i],idx=i;	
	printf("%d",idx);
	return 0;
}
