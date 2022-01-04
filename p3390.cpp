//p3390
#include <cstdio>
int a1[110][110]={2,5,6,8},b1[110][110]={1,3,7,9},c1[110][110],n=2;
int** mul(int **a,int **b,int n){
	int** c=new int*[n+1];
	for(int i=0;i<n;i++)
	for(int j=0;i<n;j++)
	for(int k=0;k<n;k++)
	c[i][j]+=a[i][k]*b[k][j];
	return c;
}

int main(){
	
	
	c1=mul(a1,b1);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)printf("%d ",c1[i][j]);
		printf("\n");
	}
	return 0;
}
