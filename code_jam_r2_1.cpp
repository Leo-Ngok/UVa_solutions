#include <bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char dir[]={'W','N','E','S'};
struct node{
	int x,y;
	string route;
};
queue<node> q;
int absx(int x){
	return (x>0)?x:-x;
}
long long lowbit(long long x){
	return x&(-x);
}
int lowbit(int x){
	return x&(-x);
}
int x,y,t;
long long tmp;
int main()
{
	scanf("%d",&t);
	for(int casecnt=1;casecnt<=t;casecnt++){
		scanf("%d%d",&x,&y);
		printf("Case #%d: ",casecnt);
		if(!((x^y)&1)){
			printf("IMPOSSIBLE\n");continue;
		}		
		else
		{
			while(!q.empty())q.pop();
			node nd;
			nd.x=nd.y=0;
			q.push(nd);
			while(!q.empty()){
				node nq=q.front(),nq1;
				long long cx=nq.x,cy=nq.y;
				int siz=nq.route.size();
				for(int i=0;i<4;i++)
				{
					nq1.x=cx+dx[i]*(1<<siz),nq1.y=cy+dy[i]*(1<<siz);
					nq1.route=nq.route+dir[i];
					if(nq1.x==x&&nq1.y==y)
					{
						cout<<nq1.route<<endl;
						goto sec1;
					}
					q.push(nq1);
				}
				q.pop();
			}
			sec1:
				int bb=1;
		}
	}
	return 0;
} 
