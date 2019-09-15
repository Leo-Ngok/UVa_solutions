#include <cstdio>

int a[100];
int b[100];
int main(){
	int n;
	scanf("%d",&n);
	for(int u=1;u<=n;u++){
		a[0]=1;	
		for(int k=1;k<=u;k++){
			for(int m=0;m<100;m++)
				a[m]*=k;		
		for(int p=0;p<100;p++)
			if(a[p]>=10){
				a[p+1]+=a[p]/10;
				a[p]%=10;
			}		
		}
		for(int r=0;r<100;r++){
			b[r]+=a[r];
			a[r]=0;
		}
	}
	for(int w=0;w<99;w++){
		if(b[w]>=10){
			b[w+1]+=b[w]/10;
			b[w]%=10;
		}
	}
	
	bool isdigit=false;
	for(int j=99;j>=0;j--){
		if(b[j]!=0) isdigit=true;
		if(isdigit) printf("%d",b[j]);
	}
	return 0;
}
