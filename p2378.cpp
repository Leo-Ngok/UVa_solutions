#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;
typedef long long LL;
int main(){
	string s;cin>>s;
	if(s[1]=='^'){
		s.erase(0,3);
		if(s.empty()){
			cout<<"x^2";return 0;
		}
		if(s.find("x")==string::npos){//x^2+/-c
			LL x=0;
			s.erase(0,1);
			stringstream h(s);
			h>>x;
			cout<<"(x+"<<sqrt(x)<<")(x-"<<sqrt(x)<<")";
		}else{
			if(s.find("+",1)==string::npos&&s.find("-",1)==string::npos){
				if(s[0]=='+'){
					s.erase(0,1);
					s.erase(s.size()-1,1);
					stringstream h(s);
					LL x=1;
					if(!s.empty())h>>x;
					cout<<"(x+"<<x<<")x";
				}else{
					s.erase(0,1);
					s.erase(s.size()-1,1);
					stringstream h(s);
					LL x=1;
					if(!s.empty())h>>x;
					cout<<"x(x-"<<x<<")";
				}
			}else{
				LL b=1,c;		
				if(s[0]=='+'){
					s.erase(0,1);
					int xpos=s.find_first_of('x');	
					string s1=s.substr(0,xpos);				
					stringstream h(s1);
					if(!s1.empty())h>>b;
					s.erase(0,xpos+1);
					if(s[0]=='+'){
						s.erase(0,1);
						stringstream h2(s);
						h2>>c;
					}else{
						s.erase(0,1);
						stringstream h2(s);
						h2>>c;
						c=-c;
					}
				}else{
					s.erase(0,1);
					int xpos=s.find_first_of('x');	
					string s1=s.substr(0,xpos);				
					stringstream h(s1);
					if(!s1.empty())h>>b;
					b=-b;
					s.erase(0,xpos+1);
					if(s[0]=='+'){
						s.erase(0,1);
						stringstream h2(s);
						h2>>c;
					}else{
						s.erase(0,1);
						stringstream h2(s);
						h2>>c;
						c=-c;
					}
				}
				LL d=b*b-4*c;
				LL nx1=(b+sqrt(d))/2;
				LL nx2=(b-sqrt(d))/2;			
				string sx="(x",sy=")(x";
				if(nx1>0)sx+="+";if(nx2>0)sy+="+";
				if(nx1==nx2) cout<<sx<<nx1<<")^2";
				else cout<<sx<<nx1<<sy<<nx2<<")";
			}
		}
	}else cout<<s;
	return 0;
}

