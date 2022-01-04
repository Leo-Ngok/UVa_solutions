//p5602
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int n;
int a[300010];
long long sum=0;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",a+i);
	sort(a,a+n,cmp);
	sum=a[0];
	for(int i=1;i<n;i++){
		if(sum/sqrt(i)<=(sum+a[i])/sqrt(i+1))sum+=a[i];
		else{
			printf("%.9lf",(double)sum*sum/i);
			return 0;
		}
	}
	printf("%.9lf",(double)sum*sum/n);
	return 0;
}
