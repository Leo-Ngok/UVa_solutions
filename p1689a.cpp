#include <string>
#include <iostream>
#include <stack>
using namespace std;
int value[2];
int sign[2];
int main(){
	sign[0]=sign[1]=1;
	string s1;cin>>s1;
	int anssign=1;
	int pos2sign=1;
	int sign=1;
	int pos=0;
	for(int k=0;k<s1.size();k++){
		if(s1[k]=='?'){
			if(k!=0&&s1[k-1]=='-')anssign=-1;
		}else if(s1[k]=='-'){
			if(s1[0]=='?') sign[0]=-1;
			else if(s1[k+1]!='?'){sign[1]=-1;pos++;}
		}else if(s1[k]=='+'){
			if(s1[0]!='?')pos++;
		}else if(s1[k]=='='){
			if(s1[0]!='?')sign[1]=-1;
		}else{
			value[pos]*=10;
			value[pos]+=s1[k]-'0';
		}
	}
	int ans=value[0]*sign[0]+value*sign[1];
} 
