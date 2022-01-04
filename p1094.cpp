//p1094
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> p;
int n,w,x;
int main(){
	scanf("%d%d",&w,&n);
	while(n--){
		scanf("%d",&x);
		p.push_back(x);
	}
	sort(p.begin(),p.end());
	int count=0;
	while(p.size()){
		if(p.front()+p.back()<=w&&p.size()>1)p.erase(p.begin());
		p.pop_back();
		count++;
	}
	printf("%d",count);
	return 0;
}
