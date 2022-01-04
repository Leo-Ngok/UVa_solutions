//p1610
#include <cstdio>
#include <algorithm>
#define N 100010
bool vis[N];
int lamp[N],n,dist,ans=0;
int main(){
	scanf("%d%d",&n,&dist);
	for(int i=1;i<=n;i++)scanf("%d",lamp+i);
	std::sort(lamp+1,lamp+n+1);
	for(int i=2;i<=n-1;i++)
	if(!vis[i-1]&&vis[i+1]-vis[i-1]<=dist)vis[i]=1,ans++;
	printf("%d",ans);
	return 0;
}
