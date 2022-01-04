//p5671
#include <cstdio>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	double x,m,n;cin>>x>>m>>n;
	double angles[4]={x/2,x,180-2*x,(180-x)/2};
	sort(angles,angles+4);
	for(int k=0;k<4;k++){
		if(k==0||angles[k-1]!=angles[k])cout<<angles[k]<<" ";
	}
	cout<<endl;
	if(m!=n)printf("%.5lf ",sqrt(n*n-m*m));
	printf("%.5lf",sqrt(n*n+m*m));return 0;
}
