//p2689
#include <cstdio>
char chr[60];
int x1,y1,x2,y2,t,ans=80;
void dfs(int x,int y,int cnt,int i){
	if(x==x2&&y==y2){
		if(ans>cnt)ans=cnt;
		return;
	}
	if(i>t)return;
	switch(chr[i]){
		case 'N':dfs(x-1,y,cnt+1,i+1);break;
		case 'E':dfs(x,y+1,cnt+1,i+1);break;
		case 'W':dfs(x,y-1,cnt+1,i+1);break;
		case 'S':dfs(x+1,y,cnt+1,i+1);break;
	}
	dfs(x,y,cnt+1,i+1);
}
int main(){
	scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&t);
	for(int i=1;i<=t;i++)
	scanf("%c",chr+i);
	dfs(x1,y1,0,1);
	printf("%d",ans);
	return 0;
}
