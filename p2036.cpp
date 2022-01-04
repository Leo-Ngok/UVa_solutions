//p2036
#include <cstdio>
#include <algorithm>
int qabs(int n){
	return n>=0?n:-n;
}
int minn(int a,int b){
	return (a<b)?a:b;
}
struct food{int sts,srs;
}fd[20];
int n;
bool cmp(food f1,food f2){
	return qabs(f1.srs-f1.sts)<qabs(f2.srs-f2.sts);
}
int dfs(int i,int tt,int tr){
	if(i==n+1)return qabs(tt-tr);
	return minn(dfs(i+1,tt+fd[i].sts,tr*fd[i].srs),dfs(i+1,tt,tr));
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d",&fd[i].srs,&fd[i].sts);
	std::sort(fd+1,fd+n+1,cmp);
	printf("%d",dfs(2,fd[1].sts,fd[1].srs));
	return 0;
}
