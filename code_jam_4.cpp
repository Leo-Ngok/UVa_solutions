//code jam qround question 4
#include <bits/stdc++.h>
using namespace std;
int num[110],pos=1,eqpos=-1,uneqpos=-1,t,b;
bool vis[110]={0};
char chr;
int getnum(int i){
	int x;
	cout<<i<<endl;
	fflush(stdout);
	cin>>x;
	return x;
}
void reversestr(){
	int x=getnum(uneqpos);
	if(x!=num[uneqpos]){
		for(int i=1;i<=b/2;i++){
			int t=num[i];
			num[i]=num[b-i+1];
			num[b-i+1]=t;
		}
	}
}
void negatestr(){
	int x=getnum(eqpos);
	if(x!=num[eqpos]){
		for(int i=1;i<=b;i++){
			if(vis[i])num[i]=!num[i];
		}
	}
}
void getpair(int i){
	num[i]=getnum(i);
	num[b-i+1]=getnum(b-i+1);
	vis[i]=vis[b-i+1]=1;
	if(eqpos==-1&&num[i]==num[b-i+1])eqpos=i;
	if(uneqpos==-1&&num[i]!=num[b-i+1])uneqpos=i;
}
int main(){
	memset(num,0,sizeof(num));
	cin>>t>>b;
	for(int ii=1;ii<=t;ii++){
		eqpos=-1,uneqpos=-1;
		memset(vis,0,sizeof(vis));
		memset(num,0,sizeof(num));
		for(pos=1;pos<=5;pos++)getpair(pos);
		if(b==10){//When b is 10
			for(int i=1;i<=10;i++)cout<<num[i];
			cout<<endl;
			fflush(stdout);
			cin>>chr;
			if(chr=='N')return 0;
			else continue;
		}
		int halfpos=b>>1;
		while(pos<=halfpos){
			if(eqpos!=-1&&uneqpos!=-1){
				negatestr();
				reversestr();
			}else if(eqpos!=-1){
				negatestr();
				getnum(1);	
			}else{
				reversestr();
				getnum(1);
			}
			bool b1=0;
			for(int g=1;g<=4;g++){
				getpair(pos++);
				if(pos>halfpos){b1=1;break;}
			}
			if(b1)break;
		}
		for(int i=1;i<=b;i++)cout<<num[i];
		cout<<endl;
		fflush(stdout);	
		cin>>chr;
		if(chr=='N')return 0;
	}
	return 0;
}
