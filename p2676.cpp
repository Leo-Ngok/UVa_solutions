//p2676
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,b;
	scanf("%d %d",&n,&b);
	int hs[n];
	for(int k=0;k<n;k++)scanf("%d",&hs[k]);
	vector<int> height(hs,hs+n);
	sort(height.begin(),height.end());
	int count=0;
	while(b>0){
		b-=height.back();
		height.pop_back();
		count++;
	}
	printf("%d",count);return 0;
}
