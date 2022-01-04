//p5738
#include <cstdio>
int max1,min1,n,m,x,sum;
double ans=-2,mean;
int main(){
	scanf("%d%d",&n,&m);
	while(n--){
		max1=0,min1=10,sum=0;
		for(int i=1;i<=m;i++){
			scanf("%d",&x);
			if(x>max1)max1=x;
			if(x<min1)min1=x;
			sum+=x;
		}
		sum-=max1;
		sum-=min1;
		mean=(double)sum/(m-2);
		if(ans<mean)ans=mean;
	}
	printf("%.2lf",ans);
	return 0;
}
