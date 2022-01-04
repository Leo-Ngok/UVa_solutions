//p5461
#include <cstring>
#include <cstdio>
int mat[1030][1030];
void setnum(int lhx,int lhy,int rhx,int rhy){
	if(rhx-lhx==1)mat[lhx+1][lhy]=mat[lhx][lhy+1]=mat[lhx+1][lhy+1]=1;
	else{
		setnum((lhx+rhx)/2+1,lhy,rhx,(lhy+rhy)/2);
		setnum(lhx,(lhy+rhy)/2+1,(lhx+rhx)/2,rhy);
		setnum((lhx+rhx)/2+1,(lhy+rhy)/2+1,rhx,rhy);	
	}
}
int main(){
	memset(mat,0,sizeof(mat));
	int n;scanf("%d",&n);
	n=1<<n;
	setnum(1,1,n,n);
	for(int i=1;i<=n;i++)
	{for(int j=1;j<=n;j++)printf("%d ",mat[i][j]);
	printf("\n");
	}
	return 0;
}
