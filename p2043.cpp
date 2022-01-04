//p2043
#include <cstdio>
#include <cstring>
using namespace std;
int pl[10002];
int n;
int main(){
	scanf("%d",&n);
	memset(pl,0,sizeof(pl));
	for(int k=2;k<=n;k++){
		int q=k,j=2;
		while(q>1){
			if(q%j==0){
				q/=j;
				pl[j]++;
			}else j++;			
		}
	}
	for(int k=0;k<10002;k++){
		if(pl[k])printf("%d %d\n",k,pl[k]);
	}
	return 0;
}
