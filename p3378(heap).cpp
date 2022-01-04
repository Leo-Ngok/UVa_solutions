//p3378
#include <bits/stdc++.h>
using namespace std;
priority_queue <int, vector<int>, greater<int> > pq;
int n,x,y;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		switch(x){
			case 1:scanf("%d",&y);pq.push(y);break;
			case 2:printf("%d\n",pq.top());break;
			case 3:pq.pop();break;
		}
	}
	return 0;
}
