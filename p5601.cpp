//p5601
#include <map>
#include <string>
#include <iostream>
using namespace std;
map<string,string> ques;
char ans[5]={'@','A','B','C','D'};
int n,m;
string ts1,ts2,ts[5];
int main(){
	cin>>n>>m;
	while(n--){
		cin>>ts1>>ts2;
		ques[ts1]=ts2;
	}
	while(m--){
		cin>>ts1;
		for (int i=1;i<=4;i++)cin>>ts[i];
		for(int i=1;i<=4;i++){
			if(ques[ts1]==ts[i]){cout<<ans[i]<<endl;break;}
		}
	}
	return 0;
}
