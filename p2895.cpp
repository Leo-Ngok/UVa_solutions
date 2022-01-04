//p2895
#include <queue>
#include <cstdio>
#include <cstring>
using namespace std;
queue<int> px,py;
int n,arr[310][310],x,y,t,ans;
bool vis[310][310];
int minn(int x,int y){
	return x<y?x:y;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<306;i++)
	for(int j=0;j<306;j++)
	arr[i][j]=10000;
	while(n--){
		scanf("%d%d%d",&x,&y,&t);
		if(x>0)arr[x-1][y]=minn(arr[x-1][y],t);
		if(y>0)arr[x][y-1]=minn(arr[x][y-1],t);
		arr[x][y]=minn(arr[x][y],t);
		arr[x+1][y]=minn(arr[x+1][y],t);
		arr[x][y+1]=minn(arr[x][y+1],t);
	}	
	if(arr[0][0]==10000){
		printf("0");return 0;
	}
	px.push(0),py.push(0);
	while(!px.empty()){
		x=px.front(),y=py.front(),t=x+y;
		px.pop(),py.pop();
		if(arr[x+1][y]==10000||arr[x][y+1]==10000){
			printf("%d",t+1);return 0;
		}
		if(t+1<arr[x+1][y])px.push(x+1),py.push(y);
		if(t+1<arr[x][y+1])px.push(x),py.push(y+1);
	}
	printf("-1");
	return 0;
}
