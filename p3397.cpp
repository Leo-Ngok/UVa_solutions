//p3397
#include <cstdio>
#include <memory.h>
int main(){
	int m,n,a,b,g,k;scanf("%d%d",&m,&n);m++;
	int grid[m][m];
	memset(grid,0, sizeof(grid[0][0])*m*m);
    while(n--){
    	scanf("%d%d%d%d",&a,&b,&g,&k);
    	for(int p=a;p<=g;p++)
    	for(int q=b;q<=k;q++)
    	grid[p][q]++;
	}
	for(int i=1;i<m;i++){
	for(int j=1;j<m;j++)printf("%d ",grid[i][j]);
	printf("\n");}
	return 0;
}
