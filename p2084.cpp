#include <string>
#include <iostream>
using namespace std;
int m;
string s,s1="";
int main(){
	cin>>m>>s;
	int n=s.size();
	bool f=0;
	for(int i=0;i<n;i++){	
		if(s[i]!='0'){
			if(f)cout<<'+';
			cout<<s[i]<<'*'<<m<<'^'<<n-i-1;
			f=1;
		}
	}
	cout<<s1;return 0;
}
