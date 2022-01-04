//p4924
#include <cstdio>
int arr[510][510],n,m,x0,y0,r,z;
void fill(){
	int t=1;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	arr[i][j]=t++;
}
void swap(int &a,int &b){
	int t=a;a=b;b=t;
}
void transpose(int istart,int iend,int jstart,int jend){
	for(int i=istart;i<=iend;i++)
	for(int j=i+1;j<=jend;j++)
	swap(arr[i][j],arr[j][i]);
}
//reflection on y=y1
void refx(int x1,int x2,int y1,int y2){
	int xt=x1+x2;
	for(int i=x1;i<=x1+(x2-x1)/2-1;i++)
	for(int j=y1;j<=y2;j++)
	swap(arr[i][j],arr[xt-i][j]);
}
void refy(int x1,int x2,int y1,int y2){
	int yt=y1+y2;
	for(int j=y1;j<=y1+(y2-y1)/2-1;j++)
	for(int i=x1;i<=x2;i++)
	swap(arr[i][j],arr[i][yt-j]);
}
int main(){
	scanf("%d%d",&n,&m);
	fill();
	while(m--){
		scanf("%d%d%d%d",&x0,&y0,&r,&z);		
		transpose(x0-r,x0+r,y0-r,y0+r);
		if(z==0)refy(x0-r,x0+r,y0-r,y0+r);
		else refx(x0-r,x0+r,y0-r,y0+r);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}
