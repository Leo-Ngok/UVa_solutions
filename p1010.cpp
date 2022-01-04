#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int n;
string makestr(int num){
	if(num==0)return"0";
	if(num==1)return "2(0)";
	else if(num==2) return "2";
	else{
		string s1="";
		int k=0;
		while(num){
			if(num&1){
				if(k!=1)s1="+2("+makestr(k)+")"+s1;
				else s1="+2"+s1;
			}
			num>>=1;
			k++;
		}
		s1.erase(0,1);
		return s1;
	}
}
int main(){
	scanf("%d",&n);
	cout<<makestr(n);
	return 0;
}
