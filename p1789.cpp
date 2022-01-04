//p1789
#include <cstdio>

bool a[110][110]={0};
long long cnt=0,n,m,k;
void setval(int i,int j){
	if(i>=1&&j>=1&&i<=n&&j<=n)a[i][j]=1;
}
int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	int x,y;
	while(m--){
		scanf("%d%d",&x,&y);
		setval(x-2,y);setval(x-1,y-1);setval(x-1,y);setval(x-1,y+1);
		setval(x,y-2);setval(x,y-1);setval(x,y);setval(x,y+1);setval(x,y+2);
		setval(x+1,y-1);setval(x+1,y);setval(x+1,y+1);setval(x+2,y);
	}
	while(k--){
		scanf("%d%d",&x,&y);
		setval(x-2,y);setval(x-1,y-1);setval(x-1,y);setval(x-1,y+1);
		setval(x,y-2);setval(x,y-1);setval(x,y);setval(x,y+1);setval(x,y+2);
		setval(x+1,y-1);setval(x+1,y);setval(x+1,y+1);setval(x+2,y);
		
		setval(x-2,y-2);setval(x-2,y-1);setval(x-2,y+1);setval(x-2,y+2);
		setval(x-1,y-2);setval(x-1,y+2);setval(x+1,y-2);setval(x+1,y+2);
		setval(x+2,y-2);setval(x+2,y-1);setval(x+2,y+1);setval(x+2,y+2);
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(a[i][j]==0)cnt++;
	printf("%lld",cnt);
	return 0;
}
