//p2880
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int st1[20][100010],st2[20][100010],n,m,l,r;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&st1[0][i]),st2[0][i]=st1[0][i];
	int h=log(n)/log(2);
	for(int i=1;i<=h;i++)
	for(int j=1;j<=n-(1<<i)+1;j++)
	st1[i][j]=max(st1[i-1][j],st1[i-1][j+(1<<(i-1))]),
	st2[i][j]=min(st2[i-1][j],st2[i-1][j+(1<<(i-1))]);
	#ifdef DEBUG
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)printf("%d ",st1[i][j]);
		printf("\n");
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)printf("%d ",st2[i][j]);
		printf("\n");
	}
	#endif
	while(m--){
		scanf("%d%d",&l,&r);
		int p=log(r-l+1)/log(2);	
		printf("%d\n",max(st1[p][l],st1[p][r-(1<<p)+1])-min(st2[p][l],st2[p][r-(1<<p)+1]));
	}
	return 0;
}
