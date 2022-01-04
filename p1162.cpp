//p1162
#include <queue>
#include <cstdio>
using namespace std;
int arr[40][40],n;
const int dx[]={-1,0,0,1};
const int dy[]={0,-1,1,0};
queue<int> x,y;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	scanf("%d",&arr[i][j]);
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<n;j++){
			if(arr[i][j]==1&&arr[i+1][j]==1&&arr[i][j+1]==1&&arr[i+1][j+1]==0){
				x.push(i+1),y.push(j+1);
				arr[i+1][j+1]=2;
				while(!x.empty()){
					int p=x.front(),q=y.front();
					x.pop(),y.pop();
					for(int i=0;i<4;i++){
						int p1=p+dx[i],q1=q+dy[i];
						if(arr[p1][q1]==1||arr[p1][q1]==2)continue;
						arr[p1][q1]=2;
						x.push(p1),y.push(q1);
					}
				}
				goto disp;
			}
		}
	}
	disp:
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)printf("%d ",arr[i][j]);
			printf("\n");
		}
		return 0;
}
