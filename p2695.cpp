//p2695
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,x,sum=0;
//a is defence b is attack
vector<int> a;
int b[100010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		scanf("%d",&x);a.push_back(x);
	}
	for(int i=0;i<n;i++){
		scanf("%d",b+i);
	}
	sort(a.begin(),a.end());
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(b[i]>=a.front()){
			sum+=b[i];
			a.erase(a.begin());
		}
		if(a.empty())break;
	}
	if(!a.empty())printf("you died!");
	else printf("%d",sum);
}
