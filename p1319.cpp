//p1319
#include <cstdio>
#include <deque>
using namespace std;
int n,cnt=0,tmp;
deque<int> num;
bool state=0;
int main(){
	scanf("%d",&n);
	while(scanf("%d",&tmp)!=EOF) num.push_back(tmp);
	int cnt=0;
	while(!num.empty()){
		for(int i=1;i<=num.front();i++){
			if(cnt%n==0&&cnt!=0)printf("\n");
			printf("%d",(int)state);
			cnt++;
		}
		state=!state;
		num.pop_front();
	}
	return 0;
}
