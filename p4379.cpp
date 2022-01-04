//p4379
#include <algorithm>
#include <cstdio>
using namespace std;
int n;
int num[100010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%d",&n);
	for(int k=0;k<n;k++)scanf("%d",num+k);
	sort(num,num+n,cmp);
	int cnt=0;
	for(int k=0;k<n;k++){
		if(k<=num[k])cnt++;
		else break;
	}
	printf("%d",cnt);
	return 0;
}
