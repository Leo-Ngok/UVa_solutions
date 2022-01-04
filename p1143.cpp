//p1143
#include <iostream>
# include <string>
using namespace std;
int n,m,val;
string s1,s2="";
int main(){
	cin>>n>>s1>>m;
	for(int i=0;i<s1.length();i++){
		val*=n;
		char c1=s1[i];
		if(c1>='0'&&c1<='9')val+=(c1-'0');
		else val+=(c1-'A'+10);
	}
	while(val){
		int v=val%m;
		char c2=(v>=10)?v-10+'A':v+'0';
		s2=c2+s2;
		val/=m;
	}
	cout<<s2;
	return 0;
} 
