//p2249
#include <cstdio>
#include <cstring>

#define maxn 1000010
using namespace std;
int num[maxn];
int n,m;
bool found=0;
int main(){
	scanf("%d%d",&n,&m);
	memset(num,-2,sizeof(num));
	for(int i=1;i<=n;i++)scanf("%d",num+i);
	while(m--){
		int l=1,r=n,x,found=0;
		scanf("%d",&x);
		while(l<=r){
			int mid=(l+r)/2;
			if(num[mid]==x){
				while(num[mid-1]==x&&mid>1){mid--;}
				printf("%d ",mid);
				found=1;
				break;
			}else if(num[mid]<x)l=mid+1;
			else r=mid-1;
		}
		if(!found)printf("-1 ");
	}
	return 0;
}
