//p3817
#include <cstdio>
int candy[100010],n,x;long long sum=0;
int main(){
	scanf("%d%d",&n,&x);
	for(int k=1;k<=n;k++)scanf("%d",candy+k);
	for(int k=1;k<n;k++){
		if(candy[k]+candy[k+1]>x){
			sum+=candy[k]+candy[k+1]-x;
			candy[k+1]-=(candy[k]+candy[k+1]-x);
			if(candy[k+1]<0){
				candy[k]+=candy[k+1];
				candy[k+1]=0;
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

