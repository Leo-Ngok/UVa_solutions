//p1098
#include <cstdio> 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int p1,p2,p3;
string s1;
char c1,c2,c3,c;
int main(){
	cin>>p1>>p2>>p3>>s1;
	for(int i=0;i<s1.size();i++){
		c1=s1[i-1],c2=s1[i],c3=s1[i+1];
		if(s1[i]=='-'&&(c3>c1)&&((c1>='0'&&c3<='9')||(c1>='a'&&c3<='z'))){
			for(int j=(p3==1)?c1+1:c3-1;(p3==1)?j<c3:j>c1;(p3==1)?j++:j--){
				c=j;
				if(p1==2&&c>='a')c-=32;
				else if(p1==3)c='*';
				for(int q=1;q<=p2;q++)printf("%c",c);
			}
		}else printf("%c",c2);	
	}
	return 0;
}
