//p1296
#include <iostream>
#include <algorithm>
using namespace std;
int n,d;
int main(){
	cin>>n>>d;
	int p[n];
	int t=n;
	while(n--)cin>>p[n];
	if(t==1){cout<<"0";return 0;}
	std::sort(p,p+t);
	int c=0;
	for(int k=0;k<t-1;k++){
		for(int j=k+1;j<t;j++){
			if(p[j]-p[k]<=d)c++;
			else break;
		}
	}
	cout<<c;return 0;
}
