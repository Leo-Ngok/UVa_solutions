//p1048
#include<stdio.h> 
int max(int a, int b){return(a > b)?a:b;} 
int K[110][1010]; 
int wt[110];
int val[110];
int knapSack(int W, int n){ 
	int i, w;  
	for (i=1;i<=n;i++){ 
		for (w=1;w<=W;w++){ 		 
			if (wt[i-1]<=w) 
			K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]); 
			else K[i][w]=K[i-1][w]; 
		} 
	} 
	return K[n][W]; 
} 
int main(){ 
	int W,n;scanf("%d %d",&W,&n);
	for(int k=0;k<n;k++)scanf("%d %d",wt+k,val+k);
	printf("%d", knapSack(W,n)); 
	return 0; 
} 

