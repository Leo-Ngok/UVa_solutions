//p3392
#include <cstdio>
char chr[60][60];
int n,m,ans=3000,tmp=0;
int minn(int x,int y){
	return(x<y)?x:y;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%s",chr[i]);
	for(int i=0;i<=n-3;i++)
	for(int j=i+1;j<=n-2;j++){
		tmp=0; 
		for(int p=0;p<=i;p++)
		for(int q=0;q<m;q++)
		if(chr[p][q]!='W')tmp++;
		for(int p=i+1;p<=j;p++)
		for(int q=0;q<m;q++)
		if(chr[p][q]!='B')tmp++;
		for(int p=j+1;p<=n-1;p++)
		for(int q=0;q<m;q++)
		if(chr[p][q]!='R')tmp++;
		ans=minn(ans,tmp);
	}
	printf("%d",ans);
	return 0;
}
