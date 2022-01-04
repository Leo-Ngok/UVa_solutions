//p5650
#include <string>
#include <iostream>
using namespace std;
string s;
int cnt=0,pcnt=0;
int main(){
	cin>>s;
	int n=s.size();
	for(int k=0;k<n;k++){
		if(s[k]=='0'&&k!=n-1){
			cnt++;
		}else if(s[k]=='1'&&k!=0){
			if(cnt>pcnt)pcnt=cnt;
			cnt=0;
		}else if(s[k]=='0'&&k==n-1){
			cnt++;
			if(cnt>pcnt)pcnt=cnt;
		}
	}
	cout<<pcnt;
	return 0;
}
