//p1183
#include <cstdio>
int main(){
	int n;scanf("%d",&n);
	int coord[n+1][2];
	for(int k=0;k<n;k++)scanf("%d%d",&coord[k][0],&coord[k][1]);
	coord[n][0]=coord[0][0];coord[n][1]=coord[0][1];
	int s=0;
	for(int k=0;k<n;k++)s+=coord[k][0]*coord[k+1][1]-coord[k][1]*coord[k+1][0];
	printf("%d",s/2);return 0;	
}
