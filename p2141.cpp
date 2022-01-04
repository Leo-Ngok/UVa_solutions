//p2141
#include <cstdio>
int num[110];
int n,cnt=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",num+i);
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(i==j)continue;
			for(int k=1;k<=n;k++){
				if(j==k)continue;
				if(num[i]+num[j]==num[k])cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
