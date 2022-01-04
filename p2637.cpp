//p2637
#include <cstdio>
#include <algorithm>
int a[1010];
int main(){
	int n,m;scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)scanf("%d",&a[i]);
	std::sort(a,a+m);
	int maxn=0,price=0;
	for(int k=0;k<m;k++){
		int current=a[k];
		if(maxn<current*(m-k)){
			maxn=current*(m-k);
			price=current;
		}
	}
	printf("%d %d",price,maxn);return 0;
}
