//p5729
#include <cstdio>
#include <cstring>
#define MA 22
int cube[MA][MA][MA]={0};
int main(){
	int w,x,h,q;scanf("%d%d%d%d",&w,&x,&h,&q);
	while(q--){
		int x1,y1,z1,x2,y2,z2;
		scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
		for(int i=x1;i<=x2;i++)
		for(int j=y1;j<=y2;j++)
		for(int k=z1;k<=z2;k++)
		cube[i][j][k]=1;
	}
	int ans=0;
	for(int i=1;i<=w;i++)
	for(int j=1;j<=x;j++)
	for(int k=1;k<=h;k++)
	if(!cube[i][j][k])ans++;
	printf("%d\n",ans);return 0;
}
