//p2955
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		string s;cin>>s;
		int d=s[s.length()-1]-'0';
		if(d%2==0)cout<<"even"<<endl;
		else cout<<"odd"<<endl;
	}
	return 0;
}
