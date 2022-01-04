//p1135
#include <cstdio>
int minn=0x7ffffff,n,a,b,flr[220],failed=0;
bool flrvis[220];
void dfs(int current,int currcnt){
	if(current==b){
		if(currcnt<minn)minn=currcnt;
		return;
	}
	else if(currcnt<=minn){
		flrvis[current]=1;
		if(current+flr[current]<=n&&!flrvis[current+flr[current]])dfs(current+flr[current],currcnt+1);
		if(current-flr[current]>=1&&!flrvis[current-flr[current]])dfs(current-flr[current],currcnt+1);
		flrvis[current]=0;
	}
	
}
int main(){
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;i++)scanf("%d",flr+i);
	flrvis[a]=1;
	dfs(a,0);
	if(minn==0x7ffffff)printf("-1");
	else printf("%d",minn);
	return 0;
}
