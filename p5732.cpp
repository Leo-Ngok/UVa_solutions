//p5732,binomial coefficient
#include <cstdio>
int nck[25][25],n;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==n)nck[i][j]=1;
			else nck[i][j]=nck[i-1][j-1]+nck[i-1][j];
			printf("%d ",nck[i][j]);
		}
		printf("\n");
	}
	return 0;
}
