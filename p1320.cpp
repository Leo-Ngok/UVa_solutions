#include <string>
#include <iostream>
using namespace std;
string str;
string ansstr;
int n,cnt=1;
int main(){
	cin>>ansstr;
	n=ansstr.size();
	while(cin>>str)ansstr+=str;
	cout<<n;
	if(ansstr[0]=='1')cout<<" 0";
	for(int i=1;i<ansstr.size();i++){
		if(ansstr[i-1]!=ansstr[i]){
			cout<<" "<<cnt;
			cnt=1;
		}else cnt++;
	}
	cout<<" "<<cnt;
	return 0;
}
