//p1200
#include <string>
#include <iostream>
using namespace std;
string s1,s2;
int n1=1,n2=1;
int main(){
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)n1*=(int)(s1[i]-'A'+1);
	for(int i=0;i<s2.size();i++)n2*=(int)(s2[i]-'A'+1);
	if(n1%47==n2%47)cout<<"GO";
	else cout<<"STAY";
	return 0;
}
