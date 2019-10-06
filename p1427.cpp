#include <cstdio>
#include <stack>
using namespace std;
int main(){
	long num;
	stack<long> nums;
	while(scanf("%ld",&num)!=EOF&&num!=0)
		nums.push(num);
	int size=nums.size();
	for(int k=0;k<size;k++){
		printf("%ld ",nums.top());
		nums.pop();
	}
	return 0;
}
