//p1994
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
	string fx;cin>>fx;
	char elem;
	bool f=0;
	if(fx[fx.length()-1]>'9')fx.insert(fx.length(),"1");
	int n=fx.length();
	for(int k=1;k<fx.length();k++){
		if(fx[k]>='0'&&fx[k]<='9')continue;
		if(fx[k-1]>='0'&&fx[k-1]<='9')continue;
		fx.insert(k,"1");
	}
	int m=0,c=0,h=0,o=0;
	for(int k=fx.length()-1;k>=0;k--){
		if(fx[k]=='C'){
			c+=m;m=0;
		}else if(fx[k]=='H'){
			h+=m;m=0;
		}else if(fx[k]=='O'){
			o+=m;m=0;
		}else{
			if(m==0)m=fx[k]-'0';
			else m+=(fx[k]-'0')*pow(10,floor(log(m)/log(10)+0.5)+1);
		}
	}
	cout<<c<<" "<<h/2;return 0;
}
