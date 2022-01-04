//p5733
#include <string>
#include <iostream>
using namespace std;
string c;
int main(){
	cin>>c;int n=c.length();
	for(int k=0;k<n;k++)if(c[k]>='a'&&c[k]<='z')c[k]-=32;
	cout<<c;return 0;
}
