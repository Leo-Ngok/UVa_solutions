//p2788
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	string s1;cin>>s1;
	stack<int> nums;
	nums.push(0);
	int sign=1;
	for(int k=0;k<s1.length();k++){
		char c=s1[k];
		if(c=='+'){sign=1;nums.push(0);}
		else if(c=='-'){sign=-1;nums.push(0);}
		else{
			int n=nums.top();nums.pop();
			n*=10;n+=sign*(c-'0');
			nums.push(n);
		}
	}
	int sum=0;
	while(!nums.empty()){sum+=nums.top();nums.pop();}
	cout<<sum;
}
