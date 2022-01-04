//p5740
#include <iostream>
#include <string>
using namespace std;
int main(){
	string name,record;int n,a,b,c,a1,b1,c1;
	cin>>n;
	cin>>name>>a>>b>>c;
	a1=a;b1=b;c1=c;record=name;n--;
	while(n--){
		cin>>name>>a>>b>>c;
		if(a+b+c>a1+b1+c1){
			a1=a;b1=b;c1=c;record=name;
		}
	}
	cout<<record<<" "<<a1<<" "<<b1<<" "<<c1;return 0;
}
