//code jam qround question 5
#include <cstdio>
#include <cstring>
int n,k,t;
int mat[60][60];
bool colnused[60][10],rowused[60][10],found=0;
void print(){
	found=1;
	printf("POSSIBLE\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)printf("%d ",mat[i][j]);
		printf("\n");
	}
	//exit(0);
}
void make(int x,int y);
void dfs(int d,int sum){
	if(d>n){
		if(sum!=k)return;
		make(1,1);
		return;
	}
	//if(sum+n*(n-d+1)<k)return;
	for(int i=1;i<=n;i++){
		if(sum+i<=k){
			mat[d][d]=i;
			colnused[d][i]=rowused[d][i]=1;
			dfs(d+1,sum+i);
			if(found)return;
			colnused[d][i]=rowused[d][i]=0;
		}
	}
}
void make(int x,int y){
	
	if(mat[x][y]!=0){
		if(found)return;
		if(x==n&&y==n){
			print();
		}
		else if(y==n)make(x+1,1);
		else make(x,y+1);
	}
	else{
		for(int i=1;i<=n;i++){
			if(!rowused[x][i]&&!colnused[y][i]){
				mat[x][y]=i;
				rowused[x][i]=colnused[y][i]=1;
				if(x==n&&y==n){
					print();
				}
				if(found)return;
				if(y==n)make(x+1,1);
				else make(x,y+1);
				mat[x][y]=rowused[x][i]=colnused[y][i]=0;
			}
		}
	}
}
int main(){
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		memset(mat,0,sizeof(mat));
		memset(rowused,0,sizeof(rowused));
		memset(colnused,0,sizeof(colnused));
		found=0;
		scanf("%d%d",&n,&k);
		printf("Case #%d: ",i);
		dfs(1,0);
		if(!found)printf("IMPOSSIBLE\n");
	}
	return 0;
}
