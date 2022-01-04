//p1165
#include <stack>
#include <cstdio>
using namespace std;
stack<int> num;
stack<int> maxnum;
int n,x,y;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		if(x==0){
			scanf("%d",&y);
			num.push(y);
			if(maxnum.empty()||y>maxnum.top())maxnum.push(y);
		}else if(x==1){
			if(!maxnum.empty()&&maxnum.top()==num.top()) maxnum.pop();
			if(!num.empty())num.pop();			
		}else{
			printf("%d\n",(maxnum.empty())?0:maxnum.top());
		}
	}
	return 0;
}
