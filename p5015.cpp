//p5015
#include <string>
#include <iostream>
using namespace std;
string s1;
int n;
int main(){
	getline(cin,s1);
	n=s1.size();
	for(int i=0;i<s1.size();i++)
	if(s1[i]==' '||s1[i]=='\n')n--;
	cout<<n;
	return 0;
}
