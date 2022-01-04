//p1271
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n,m;cin>>n>>m;short int num[m];
	for(int k=0;k<m;k++)cin>>num[k];
	sort(num,num+m);
	for(int j=0;j<m;j++)cout<<num[j]<<" ";
	return 0;
}
