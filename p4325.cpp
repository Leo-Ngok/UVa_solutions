//p4325
#include <iostream>
using namespace std;
int modnum[42];
int main(){
	int x;
	for(int k=0;k<10;k++){
		cin>>x;modnum[x%42]++;
	}
	int s=0;
	for(int j=0;j<42;j++)if(modnum[j]!=0)s++;
	cout<<s;
	return 0;
}
