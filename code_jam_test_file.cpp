#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
int x,y,xmin,ymin;
string route;
map<char,int> tox,toy;
void dfs(int x1,int y1,int x2,int y2,int depth){
	if(x1==x2&&y1==y2){
		printf("%d\n",depth);return;
	}else if(abs(x2-x1)==1&&abs(y2-y1)==1){
		if(x1<x2&&y1<y2){
			if(route[depth]=='S'){
				dfs(x1+1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}else if(route[depth]=='W'){
				dfs(x1,y1+1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}
		}
		else if(x1<x2&&y1>y2){
			if(route[depth]=='N'){
				dfs(x1+1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}else if(route[depth]=='W'){
				dfs(x1,y1-1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}
		}
		else if(x1>x2&&y1<y2){
			if(route[depth]=='S'){
				dfs(x1-1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}else if(route[depth]=='E'){
				dfs(x1,y1+1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}
		}
		else
		{
			if(route[depth]=='N'){
				dfs(x1-1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}else if(route[depth]=='E'){
				dfs(x1,y1-1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
				return;
			}
		}	
	}else if(abs(x2-x1)==1&&y1==y2){
		if((x1<x2&&route[depth]=='W')||(x1>x2&&route[depth]=='E')){
			dfs(x1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
			return;
		}
	}else if(abs(y2-y1)==1&&x1==x2){
		if((y1<y2&&route[depth]=='S')||(y1>y2&&route[depth]=='N')){
			dfs(x1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
			return;
		}
	}
	if(x1<x2)dfs(x1+1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
	else if(x1>x2)dfs(x1-1,y1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
	else if(y1<y2)dfs(x1,y1+1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
	else dfs(x1,y1-1,x2+tox[route[depth]],y2+toy[route[depth]],depth+1);
	
}
int main(){
	tox['N']=tox['S']=0;
	tox['W']=-1,tox['E']=1;
	toy['N']=-1,toy['S']=1;
	toy['W']=toy['E']=0;
	cin>>x>>y>>route;
	xmin=x,ymin=y;
	dfs(0,0,x,y,0);
	
	return 0;
}
