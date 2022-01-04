#include <string>
#include <iostream>
int n;
using namespace std;
string s1;
int num[10];
int main(){
	cin>>s1>>n;
	int m=s1.size();
	//for(int i=0;i<s1.size();i++)num[s1[i]-'0']++;
	while(n>0){
		if(s1.size()>1&&s1[0]>s1[1]){
			s1.erase(0,1);
			n--;
		}
		for(int i=1;i<s1.size();i++){
			if(i==s1.size()-1||(s1[i]>s1[i-1]&&s1[i]>s1[i+1])){
				s1.erase(i,1);
				n--;
				break;
			}
		}
	}bool flg=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!='0')flg=1;
		if(flg)cout<<s1[i];
	}
	return 0;
}
