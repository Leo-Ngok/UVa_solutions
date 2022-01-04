#include <queue>
#include <cstdio>
using namespace std;
int n,m,cnt=1,k;
queue<int> num;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) num.push(i);
	k=-1;
	while(!num.empty()){	
		if(cnt==m){
			printf("%d ",num.front());
			num.pop();cnt=1;
		}else{
			cnt++;
			num.push(num.front());
			num.pop();
		}
	}
	return 0;
}
