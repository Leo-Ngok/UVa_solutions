//p5143
#include <cstdio>
#include <math.h>
#include <algorithm>
struct point{
	int x,y,z;
}pt[50010];
bool cmp(point p1,point p2){
	return p1.z<p2.z;
}
double dist(point p1,point p2){
	int dx=(p2.x-p1.x)*(p2.x-p1.x);
	int dy=(p2.y-p1.y)*(p2.y-p1.y);
	int dz=(p2.z-p1.z)*(p2.z-p1.z);
	return sqrt(dx+dy+dz);
}
int n;
double ans=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d%d%d",&pt[i].x,&pt[i].y,&pt[i].z);
	std::sort(pt,pt+n,cmp);
	for(int i=1;i<n;i++)ans+=dist(pt[i],pt[i-1]);
	printf("%.3lf",ans);
	return 0;
}
