//p2251
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int st[20][100010],n,m,l,r;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&st[0][i]);
	int h=log(n)/log(2);
	for(int i=1;i<=h;i++)
	for(int j=1;j<=n-(1<<i)+1;j++)
	st[i][j]=min(st[i-1][j],st[i-1][j+(1<<(i-1))]);
	#ifdef DEBUG
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)printf("%d ",st[i][j]);
		printf("\n");
	}
	#endif
	int p=log(m)/log(2);
	for(int l=1;l<=n-m+1;l++)
		//scanf("%d%d",&l,&r);
		//int p=log(r-l+1)/log(2);
		printf("%d\n",min(st[p][l],st[p][m+l-(1<<p)]));
	
	return 0;
}

