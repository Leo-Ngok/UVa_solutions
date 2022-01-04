//code jam qround question 2
#include <string>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int brt[1100],t;
string str;
int fc(char c){
	return c-'0';
}
int main(){
	cin>>t;
	for(int k=1;k<=t;k++){
		memset(brt,0,sizeof(brt));
		cin>>str;
		int n=str.size();
		brt[0]=fc(str[0]);
		for(int i=1;i<n;i++)brt[i]=fc(str[i])-fc(str[i-1]);
		brt[n]=-fc(str[n-1]);
		printf("Case #%d: ",k);
		for(int i=0;i<n;i++){
			if(brt[i]>0)for(int j=1;j<=brt[i];j++)printf("(");
			if(brt[i]<0)for(int j=1;j<=-brt[i];j++)printf(")");
			printf("%c",str[i]);
		}
		if(brt[n]>0)for(int j=1;j<=brt[n];j++)printf("(");
		if(brt[n]<0)for(int j=1;j<=-brt[n];j++)printf(")");
		printf("\n");
	}
	return 0;
}
