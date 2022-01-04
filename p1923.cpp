//p1923
#include <set>
#include <cstdio>
using namespace std;
int n,k,t;
set<int> num;
int main(){
	scanf("%d%d",&n,&k);
	while(n--){
	scanf("%d",&t);
	num.insert(t);
	}
	set<int>::iterator it=num.begin();
	//num=num+k;
	//for(set<int>::iterator it=num.begin();it!=num.end();++it)
	for(int i=1;i<=k;i++)it++;
	printf("%d",*it);
	return 0;
}
