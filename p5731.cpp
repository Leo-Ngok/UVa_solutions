//p5731
#include <cstdio>
int n,xmax,ymax,xmin,ymin,i,j;
//1-right 2-down 3-left 4 up
short state=1;
int num[11][11];
int main(){
	scanf("%d",&n);
	xmin=2,ymin=1,i=1,j=1;
	xmax=ymax=n;
	for(int k=1;k<=n*n;k++){
		num[i][j]=k;
		if(state==1){					
			if(j==ymax){ymax--;state=2;i++;}else j++;		
		}
		else if(state==2){
			if(i==xmax){xmax--;state=3;j--;;}else i++;
		}
		else if(state==3){
			if(j==ymin){ymin++;state=4;i--;;}else j--;
		}
		else {
			if(i==xmin){xmin++;state=1;j++;}else i--;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)printf("%3d",num[i][j]);
		printf("\n");
	}	
	return 0;
}
