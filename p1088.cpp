//p1088
#include <cstdio>
#include <algorithm>
using namespace std;
int a[10010],n,m;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	while(m--)next_permutation(a+1,a+n+1);
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}

