//p2415
#include <iostream>
#include <math.h>
using namespace std;
long long s=0;int a[31];
int main(){
	int i=0;
	while(cin>>a[i++]);
	for(int j=0;j<i;j++)s+=a[j];
	s*=pow(2,i-2);
	cout<<s;return 0;
}
