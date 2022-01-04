//p1138
#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	set<int> num;
	while(n--){
		int a;cin>>a;num.insert(a);
	}
	if(k>num.size()){cout<<"NO RESULT";return 0;}
	set<int>::iterator it=num.begin();
	for(int i=0;i<k-1;i++)it++;
	cout<<*it;return 0;
}
