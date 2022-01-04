//p1614
#include <cstdio>
int main(){
	int n,m;scanf("%d%d",&n,&m);
	int a[n+1];
	for(int k=1;k<=n;k++)scanf("%d",&a[k]);
	int minn=100*n,s;
	for(int k=m;k<=n;k++){
		s=0;
		for(int j=k-m+1;j<=k;j++)s+=a[j];
		if(s<minn)minn=s;
	}
	printf("%d",minn);return 0;
}
