//p5730
#include <string>
#include <iostream>
using namespace std;
string line1[10]={"XXX","..X","XXX","XXX","X.X","XXX","XXX","XXX","XXX","XXX"};
string line2[10]={"X.X","..X","..X","..X","X.X","X..","X..","..X","X.X","X.X"};
string line3[10]={"X.X","..X","XXX","XXX","XXX","XXX","XXX","..X","XXX","XXX"};
string line4[10]={"X.X","..X","X..","..X","..X","..X","X.X","..X","X.X","..X"};
string line5[10]={"XXX","..X","XXX","XXX","..X","XXX","XXX","..X","XXX","XXX"};
int main(){
	int n;cin>>n;string s;
	cin>>s;
	bool f=0;
	string l1="",l2="",l3="",l4="",l5="";
	for(int k=0;k<s.length();k++){
		if(f){
			l1+="."+line1[s[k]-'0'];
			l2+="."+line2[s[k]-'0'];
			l3+="."+line3[s[k]-'0'];
			l4+="."+line4[s[k]-'0'];
			l5+="."+line5[s[k]-'0'];
		}else{
			l1+=line1[s[k]-'0'];
			l2+=line2[s[k]-'0'];
			l3+=line3[s[k]-'0'];
			l4+=line4[s[k]-'0'];
			l5+=line5[s[k]-'0'];
			f=1;
		}
	}
	cout<<l1<<endl<<l2<<endl<<l3<<endl<<l4<<endl<<l5;
	return 0;
}
