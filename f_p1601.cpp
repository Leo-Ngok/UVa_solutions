//p1601
#include <string>
#include <iostream>
#include <memory.h>
using namespace std;
string a1,b1;
int main(){
	cin>>a1>>b1;
	int m=a1.length(),n=b1.length();
	int maxn=(m<n)?n:m;
	int sum[maxn+1];
	memset(sum,0,(maxn+2)*sizeof(int));
	for(int k=0;k<maxn;k++){
		int p,q;
		p=(m-k-1>=0)?a1[m-1-k]-'0':0;
		q=(n-k-1>=0)?b1[n-1-k]-'0':0;
		sum[maxn-k]=p+q;
	}
	for(int j=maxn;j>=1;j--){
		if(sum[j]>=10)sum[j-1]++;
		sum[j]%=10;
	}
	bool flg=0;
	for(int k=0;k<=maxn;k++){
		if(sum[k]!=0)flg=1;
		if(flg)cout<<sum[k];
	}
	return 0;
}
