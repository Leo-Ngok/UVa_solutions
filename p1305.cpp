//p1305
#include <map>
#include <iostream>
using namespace std;
int n;
map<char,char>x;
map<char,char>y;
char a[36],l,r;
void find(char ch){
	if(ch=='*')return;
	cout<<ch;//this is pre-order
	find(x[ch]);
	//cout<<ch;//this is in-order
	find(y[ch]);
	//cout<<ch;//this is post-order
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){cin>>a[i]>>l>>r;x[a[i]]=l,y[a[i]]=r;}
	find(a[1]);
	return 0;
}

