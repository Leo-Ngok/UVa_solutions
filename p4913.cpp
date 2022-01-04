//p4913
#include <cstdio>
int left[1000010],right[1000010],n,ans=0,cnt=0;
int maxn(int x,int y){
	return (x>y)?x:y;
}
void dfs(int x){
	if(x==0){ans=maxn(ans,cnt);return;}
	cnt++;
	dfs(left[x]);
	dfs(right[x]);
	cnt--;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d",left+i,right+i);
	dfs(1);
	printf("%d",ans);
	return 0;
}
