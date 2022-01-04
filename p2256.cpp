//p2256
#include <map>
#include <iostream>
#include <string>
#define DEBUG 100
using namespace std;
int vp[20010]={0};
map<string,int> names;
int find(int n){
	if(vp[n]==n)return n;
	vp[n]=find(vp[n]);
	return vp[n];
}
int main(){
	int n,m;cin>>n>>m;
	for(int k=1;k<=n;k++){
		string nam;cin>>nam;
		names[nam]=k;
		vp[k]=k;
	}
	while(m--){
		string s1,s2;cin>>s1>>s2;
		vp[find(names[s2])]=find(names[s1]);
	}
	int k;cin>>k;
	while(k--){
		string s3,s4;cin>>s3>>s4;	
		if(find(names[s3])!=find(names[s4]))cout<<"No.\n";
		else cout<<"Yes.\n";
	}
	return 0;
}
