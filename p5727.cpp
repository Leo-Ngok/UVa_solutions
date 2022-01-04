//p5727
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
template <typename T>
string ToString(T Number){
    ostringstream ss;ss << Number;
	return ss.str();
}
int main(){
	int n;cin>>n;
	string s=ToString(n);
	while(n!=1){
		if(n%2!=0)n=3*n+1;
		else n/=2;
		s=ToString(n)+" "+s;
	}
	cout<<s;return 0;
}
