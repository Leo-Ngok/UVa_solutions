//p1449
#include <cstdio>
#include <stack>
using namespace std;
stack<long long> nums;
char c;
long long x,y,s=0;
int main(){
	while(1){
		c=getchar();
		if(c=='@')break;
		switch(c){
			case '+':x=nums.top();nums.pop();y=nums.top();nums.pop();nums.push(y+x);break;
			case '-':x=nums.top();nums.pop();y=nums.top();nums.pop();nums.push(y-x);break;
			case '*':x=nums.top();nums.pop();y=nums.top();nums.pop();nums.push(y*x);break;
			case '/':x=nums.top();nums.pop();y=nums.top();nums.pop();nums.push(y/x);break;
			case '.': nums.push(s);s=0;break;
			default: s*=10;s+=c-'0';;break;
		}
	}
	printf("%lld",nums.top());
	return 0;
}
