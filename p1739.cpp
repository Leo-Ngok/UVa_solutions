//p1739
#include<string>
#include <iostream>
using namespace std;
int k=0,l=0;
string s;
int main(){	
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='(')k++;
		else if(s[i]==')')l++;
		if(l>k){
			cout<<"NO";
			return 0;
		}
	}
	if(k==l)cout<<"YES";
	else cout<<"NO";
	return 0;
}
