//round 1a q3
#include <bits/stdc++.h>
int arr[1010][1010],n,m;
long long sum=0,ans=0;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&arr[i][j]),sum+=arr[i][j];
	ans=0;
	while(1){
		ans+=sum;
		int prevsum=sum;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
		int avg=0;
		int nn=i-1,ee=j+1,ss=i+1,ww=i-1;
		bool yn,ye,ys,yw;
		while(nn>0){
			if(arr[nn][j]>0){avg+=arr[nn][j];yn=1;break;}
			nn--;
		}
		while(ww>0){
			if(arr[i][ww]>0){avg+=arr[i][ww];yw=1;break;}
			ww--;
		}
		
		while(ee<=m){
			if(arr[i][ee]>0){avg+=arr[i][ee];ye=1;break;}
			ee++;
		}
		while(ss<=n){
			if(arr[ss][j]>0){avg+=arr[ss][j];ys=1;break;}
			ss++;
		}
		if(arr[i][j]*(yn+ye+ys+yw)<avg)sum-=arr[i][j],arr[i][j]=0;
		}
		if(sum==prevsum)break;
	}
	printf("%lld",ans);
	return 0;
}
