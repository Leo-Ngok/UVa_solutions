//p2677
#include <cstdio>
int ans=-400000000,a[30],n,s;
void dfs(int i,int vol){
	if(vol<=0){
		if(vol>ans)ans=vol;
		return;
	}
	if(i>n)return ;
	dfs(i+1,vol);
	dfs(i+1,vol-a[i]);
}
int main(){
	scanf("%d%d",&n,&s);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	dfs(1,s);
	printf("%d",-ans);
	return 0;
}
