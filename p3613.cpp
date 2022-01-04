//p3613
#include <cstdio>
#include <map>
using namespace std;
map<int,map<int,int> >a;
int n,q,b,i,j,k;
int main(){
	scanf("%d%d",&n,&q);
	while(q--){
		scanf("%d",&b);
		if(b==1){
			scanf("%d%d%d",&i,&j,&k);
			a[i][j]=k;
		}else{
			scanf("%d%d",&i,&j);
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}
