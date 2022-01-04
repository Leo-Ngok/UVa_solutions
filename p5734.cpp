#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;string s;cin>>n>>s;
	while(n--){
		int g;cin>>g;
		if(g==1){
			string s1;cin>>s1;
			s+=s1;
			cout<<s<<endl;
		}else if(g==2){
			int i,j;cin>>i>>j;
			s=s.substr(i,j);
			cout<<s<<endl;
		}else if(g==3){
			int i;string s1;cin>>i>>s1;
			s.insert(i,s1);
			cout<<s<<endl;
		}else{
			string s1;cin>>s1;
			size_t pos=s.find(s1);
			if(pos==string::npos)cout<<"-1\n";
			else cout<<pos<<endl;
		}
	}
	return 0;
}
