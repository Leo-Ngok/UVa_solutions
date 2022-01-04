//p1553
#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;
char num[22];
int main(){
	cin>>num;
	int type=0;
	int pos=-1;
	for(int o=0;o<21;o++){
		if(num[o]=='.') {
			type=1;pos=o;break;
		}else if(num[o]=='/'){
			type=2;pos=o;break;
		}else if(num[o]=='%'){
			type=3;pos=o;break;
		}
	}
	if(type==0){
		int flag=0;
		for(int k=20;k>=0;k--){
			if(num[k]!=0&&num[k]!='0') flag=1;
			if(flag==1)printf("%c",num[k]);
		}
		if(flag==0)printf("0");
	}else if(type==3){
		int flag=0;
		for(int k=20;k>=0;k--){
			if(num[k]!=0&&num[k]!='0'&&num[k]!='%') flag=1;
			if(flag==1)printf("%c",num[k]);
		}
		if(flag==0)printf("0");
		printf("%c",'%');
	}else if(type==1){
		int flag=0;
		for(int k=pos-1;k>=0;k--){
			if(num[k]!=0&&num[k]!='0') flag=1;
			if(flag==1)printf("%c",num[k]);
		}
		if(flag==0)printf("0");
		printf(".");
		flag=0;
		int flagd=21;
		for(int j=pos+1;j<21;j++){
			if(num[j]!='0') {
				flagd=j;break;
			}
		}
		for(int k=20;k>=flagd;k--){
			if(num[k]!=0) flag=1;
			if(flag==1)printf("%c",num[k]);												
		}
		if(flag==0)printf("0");
	}else if(type==2){
		int flag=0;
		for(int k=pos-1;k>=0;k--){
			if(num[k]!=0&&num[k]!='0') flag=1;
			if(flag==1)printf("%c",num[k]);
		}
		if(flag==0)printf("0");
		printf("/");
		flag=0;
		for(int k=20;k>=pos+1;k--){
			if(num[k]!=0&&num[k]!='0') flag=1;
			if(flag==1)	printf("%c",num[k]);
		}
	}
	return 0;
}
