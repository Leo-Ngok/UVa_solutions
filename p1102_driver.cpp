//p1102
//list writing program
#include <cstdio>
#include <math.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool isprime(int x){
	if(x==1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}
int cnt=0;
int main(){
	freopen("primelist.txt","w",stdout);
	for(int i=2;i<=100000000;i++){
		if((int)(log10(i))%2){
			i*=10;
			i--;
		}else{
			if(isprime(i)==0)continue;
			int g=log(i)/log(10);
			stringstream k;
			k<<i;
			string s=k.str();
			bool flg=0;
			while(s.size()>1){
				char p=s[0];
				char q=s[s.size()-1];
				if(p!=q){flg=1;break;}
				s.erase(s.size()-1);
				s.erase(0,1);
			}
			if(flg==1)continue;
			else {printf("%d,",i);cnt++;if(cnt%9==0)printf("\n");}		
		}
	}
	
	printf("\n%d",cnt);
	fclose(stdout);
	return 0;
}
