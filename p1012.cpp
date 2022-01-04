//p1012
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str[22];
int n;
bool cmp(string &s1,string &s2){
	return s1+s2>s2+s1;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>str[i];
	sort(str+1,str+n+1,cmp);
	for(int i=1;i<=n;i++)cout<<str[i];
	return 0;
}
