//p1554
#include <cstdio>
int digit[12];
int m,n;
int main(){
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		int k=i;
		while(k>0){
			digit[k%10]++;
			k/=10;
		}
	}
	for(int i=0;i<10;i++)printf("%d ",digit[i]);
	return 0;
}
