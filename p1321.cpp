//p1321
#include <bits/stdc++.h>
using namespace std;
string str;
int b,g;
int main(){
	cin>>str;
	int n=str.size();
	for(int i=0;i<n-2;i++){
		b+=(str[i]=='b'||str[i+1]=='o'||str[i+2]=='y');
		if(i!=n-3)g+=(str[i]=='g'||str[i+1]=='i'||str[i+2]=='r'||str[i+3]=='l');
	}
	cout<<b<<endl<<g;
	return 0;
}
