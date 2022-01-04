//p4387
#include <stack>
#include <cstdio>
using namespace std;
int q,n,a[100010],b[100010];
int condt=1;
stack<int>num;
int main(){
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		condt=1;
		for(int i=1;i<=n;i++)scanf("%d",a+i);
		for(int i=1;i<=n;i++)scanf("%d",b+i);
		for(int i=1;i<=n;i++){
			num.push(a[i]);
			while(num.top()==b[condt]&&!num.empty())num.pop(),condt++;
		}
		if(num.empty())printf("Yes\n");
		else printf("No\n");
		while(!num.empty())num.pop();
	}
	return 0;
}
