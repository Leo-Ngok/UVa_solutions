//p2615
#include <cstdio>
#include <cstring>
using namespace std;
int mat[40][40];
int main(){
	memset(mat,0,sizeof(mat[0][0])*1600);
	int n;scanf("%d",&n);
	int i=1,j=n/2+1;
	mat[i][j]=1;
	for(int k=2;k<=n*n;k++){
		if(i==1&&j!=n){
			i=n;j++;
		}else if(i!=1&&j==n){
			i--;j=1;
		}else if(i==1&&j==n){
			i++;
		}else {
			if(!mat[i-1][j+1]){
				i--;j++;
			}else{
				i++;
			}
		}
		mat[i][j]=k;
	}
	for(int p=1;p<=n;p++){
		for(int q=1;q<=n;q++)printf("%d ",mat[p][q]);
		printf("\n");
	}
	scanf("");
	return 0;
}
