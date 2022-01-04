#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;
template <typename T>
string ToString (T Number)
{
    ostringstream ss;
    ss << Number;
    return ss.str();
}
int main(){
	int n;cin>>n;
	char psign='d';
	string str;
	while(n--){
		char a;int b,c;string b1;
		cin>>a;
		if(a>='0'&&a<='9'){
			cin>>b1;b1=a+b1;
			stringstream s2(b1);
			s2>>b;
		}else{
			cin>>b;
			psign=a;
		} 
		cin>>c;
		if(psign=='a'){
			str=ToString(b)+"+"+ToString(c)+"="+ToString(c+b);
			cout<<str<<endl;
			cout<<str.length()<<endl;
		}
		else if(psign=='b'){
			str=ToString(b)+"-"+ToString(c)+"="+ToString(b-c);
			cout<<str<<endl;
			cout<<str.length()<<endl;
		}
		else if(psign=='c'){
			str=ToString(b)+"*"+ToString(c)+"="+ToString(c*b);
			cout<<str<<endl;
			cout<<str.length()<<endl;
		}		
	}
	return 0;
}
