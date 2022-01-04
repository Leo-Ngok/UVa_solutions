#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
using namespace std;
int x,y;
string route;
map<char,int> tox,toy;
struct pt{
	int x1,y1,x2,y2,depth;bool stop;
};
queue<pt> bfsq;
int dx[]={0,-1,0,1,0},dy[]={0,0,-1,0,1};
int ttt;
int main(){
	scanf("%d",&ttt);
	tox['N']=tox['S']=0;
	tox['W']=-1,tox['E']=1;
	toy['N']=1,toy['S']=-1;
	toy['W']=toy['E']=0;
	for(int iii=1;iii<=ttt;iii++){				
		pt point; 
		cin>>point.x2>>point.y2>>route;
		printf("Case #%d: ",iii);
		point.x1=point.y1=point.depth=0;
		bfsq.push(point);
		while(!bfsq.empty()){
			pt ptx=bfsq.front();
			bfsq.pop();
			if(ptx.x1==ptx.x2&&ptx.y1==ptx.y2){
				printf("%d\n",ptx.depth);
				goto success;
			}
			if(ptx.depth>=route.size())break;
			if(ptx.stop==1){
				ptx.x2+=tox[route[ptx.depth]],ptx.y2+=toy[route[ptx.depth]];
				ptx.depth++;
				if(ptx.x1==ptx.x2&&ptx.y1==ptx.y2){
					printf("%d\n",ptx.depth);
					goto success;
				}
				bfsq.push(ptx);
				continue;
			}
			for(int i=0;i<5;i++){
				pt pt1;
				pt1.x1=ptx.x1+dx[i],pt1.y1=ptx.y1+dy[i];
				pt1.x2=ptx.x2+tox[route[ptx.depth]],pt1.y2=ptx.y2+toy[route[ptx.depth]];
				pt1.depth=ptx.depth+1;
				if(pt1.x1==pt1.x2&&pt1.y1==pt1.y2){
					printf("%d\n",pt1.depth);
					goto success;
				}
				if(i==0) pt1.stop=1;
				else pt1.stop=0;
				bfsq.push(pt1);
			}	
		}
		printf("IMPOSSIBLE\n");
		success:
			while(!bfsq.empty())bfsq.pop();	
	}
	return 0;
}
