//p1563
#include <iostream>
#include <string>
using namespace std;
struct toys{
	int dir;string name;
};
int main(){
	int n,m;cin>>n>>m;
	toys toy[n];
	for(int k=0;k<n;k++)cin>>toy[k].dir>>toy[k].name;
	int curridx=0;
	for(int j=0;j<m;j++){
		int p,q;cin>>p>>q;
		if(toy[curridx].dir^p)curridx=(curridx+q)%n;
		else curridx=(curridx-q+n)%n;
	}
	cout<<toy[curridx].name;return 0;
}
