//p3865
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
	st[i][j]=max(st[i-1][j],st[i-1][j+(1<<(i-1))]);
	#ifdef DEBUG
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)printf("%d ",st[i][j]);
		printf("\n");
	}
	#endif
	while(m--){
		scanf("%d%d",&l,&r);
		int p=log(r-l+1)/log(2);
		printf("%d\n",max(st[p][l],st[p][r-(1<<p)+1]));
	}
	return 0;
}
