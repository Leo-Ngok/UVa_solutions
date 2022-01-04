//p5690
#include <iostream>
using namespace std;
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int m,d;char c;
	cin>>m>>c>>d;
	int ans=0;
	if(m==0||m>12){
		ans++;
		if(d==0||d>31)ans++;
	}else if(d==0||d>days[m])ans++;
	cout<<ans;return 0;
}
