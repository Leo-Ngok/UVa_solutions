//p5436
#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int x;cin>>x;
		if(x==1)cout<<1<<endl;
		else cout<<1ll*x*(x-1)<<endl;
	}
	return 0;
}
