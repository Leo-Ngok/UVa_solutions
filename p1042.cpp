//p1042
#include <string>
#include <iostream>
using namespace std;
string s,s1;
int habs(int x){return (x>=0)?x:-x;}
int main(){
	while(cin>>s1)s+=s1;
	int f=s.find("E");
	s.erase(f,s.size()-f);
	int W=0,l=0;
	bool flg=0;
	for(int j=0;j<s.length();j++){
		if(s[j]=='W')W++;
		else l++;
		if((l>=11||W>=11)&&habs(l-W)>1){
			flg=1;
			cout<<W<<":"<<l<<endl;
			l=0;W=0;
		}
	}
	//if(l!=0||W!=0)
	cout<<W<<":"<<l<<endl;
	cout<<endl;
	flg=0;
	l=0;W=0;
	for(int j=0;j<s.length();j++){
		if(s[j]=='W')W++;
		else l++;
		if((l>=21||W>=21)&&habs(l-W)>1){
			cout<<W<<":"<<l<<endl;
			l=0;W=0;
			flg=1;
		}
	}
	//if(l!=0||W!=0)
	cout<<W<<":"<<l<<endl;
	return 0;
	
}
