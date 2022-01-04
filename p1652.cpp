//p1652
#include <cstdio>
#include <math.h>
struct point{
	int x,y;
}; 
double dist(point a,point b){
	int x=(a.x-b.x)*(a.x-b.x);
	int y=(a.y-b.y)*(a.y-b.y);
	return sqrt(x+y);
}
struct circle{
	int r;
	point c;
	public:
		bool isptinside(point pt){
			return dist(c,pt)<r;
		}
};

int main(){
	int n;scanf("%d",&n);
	circle cir[n];
	for(int k=0;k<n;k++)scanf("%d",&((cir[k].c).x));
	for(int k=0;k<n;k++)scanf("%d",&((cir[k].c).y));
	for(int k=0;k<n;k++)scanf("%d",&cir[k].r);
	point p1,p2;
	scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
	int count=0;
	for(int k=0;k<n;k++)
	if(cir[k].isptinside(p1)^cir[k].isptinside(p2))count++;
	printf("%d",count);return 0;
}

