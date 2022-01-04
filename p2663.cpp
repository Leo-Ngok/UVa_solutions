//p2663
#include <cstdio> 
#include <algorithm>
int a[110],sum,n;
using namespace std;
int dfs(int i,int vol,int cnt){
	if(cnt>(n>>1))return vol;
	if(vol+a[i]>sum)return dfs(i+1,vol,cnt);
	return max(dfs(i+1,vol,cnt),dfs(i+1,vol+a[i],cnt+1));
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",a+i),sum+=a[i];
	sum>>=1;
	int x=dfs(1,0,0);
	printf("%d",x);
	return 0;
}
