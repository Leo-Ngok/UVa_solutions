//p1603
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cstdio>
using namespace std;
string str[8];
string numl[7];
map<string,string> chrtint;
string ans="";
int n=6;

bool cmp(string &s1,string &s2){
	return s1+s2<s2+s1;
}
int main(){
	chrtint["one"]="01";
chrtint["two"]="04";
chrtint["three"]="09";
chrtint["four"]="16";
chrtint["five"]="25";
chrtint["six"]="36";
chrtint["seven"]="49";
chrtint["eight"]="64";
chrtint["nine"]="81";
chrtint["ten"]="00";
chrtint["eleven"]="21";
chrtint["twelve"]="44";
chrtint["thirteen"]="69";
chrtint["fourteen"]="96";
chrtint["fifteen"]="25";
chrtint["sixteen"]="56";
chrtint["seventeen"]="89";
chrtint["eighteen"]="24";
chrtint["nineteen"]="61";
chrtint["twenty"]="00";
chrtint["first"]="01";
chrtint["a"]="01";
chrtint["both"]="04";
chrtint["another"]="04";
chrtint["second"]="04";
chrtint["third"]="09";
	for(int i=1;i<=7;i++)cin>>str[i];
	for(int i=1;i<=6;i++)numl[i]=chrtint[str[i]];
	sort(numl+1,numl+n+1,cmp);
	
	for(int i=1;i<=n;i++)ans+=numl[i];
	bool flg=0;
	for(int i=0;i<ans.size();i++){
		if(ans[i]!='0')flg=1;
		if(flg==1)printf("%c",ans[i]);
	}
	if(flg==0)printf("0");
	return 0;
}
