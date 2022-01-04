//p1928
#include <string>
#include <iostream>
#include <stack>
using namespace std;
string s;
string dfs(string str){
	if(str.find("[")==string::npos){
		if(str[0]<'0'||str[0]>'9')return str;
		int x=str[0]-'0';
		str.erase(0,1);
		if(x<=1)return str;
		string c;
		while(x--)c+=str;
		return c;
	}
	int l=str.find("["),r=str.find_last_of("]");
	string st=str.substr(0,l)+dfs(str.substr(l+1,r-l-1))+str.substr(r+1,str.size()-r-1);
	if(st[0]<'0'||st[0]>'9')return st;
	int x=st[0]-'0';
	st.erase(0,1);
	if(x<=1)return st;
	string c;
	while(x--)c+=st;
	return c;
}
int main(){
	cin>>s;
	cout<<dfs(s);
	return 0;
}

