//p1071
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
char chr[27];
int chrcnt[27]={0};
string s1,s2,s3;
int main(){
	memset(chr,'1',sizeof(chr));
	memset(chrcnt,0,sizeof(chrcnt));
	cin>>s1>>s2>>s3;
	for(int i=0;i<s1.size();i++){
		if(chr[s1[i]-'A']=='1'){chr[s1[i]-'A']=s2[i];chrcnt[s2[i]-'A']++;}
		else{
			if(chr[s1[i]-'A']!=s2[i]){
				printf("Failed");
				return 0;
			}
		}
	}	
	for(int i=0;i<26;i++){
		if(chr[i]=='1'||chrcnt[i]!=1){
			printf("Failed");
			return 0;	
		}
	}
	for(int i=0;i<s3.size();i++)printf("%c",chr[s3[i]-'A']);
	return 0;
}

