//p4710
#include <math.h>
#include <cstdio>
int main(){
	double v,a;scanf("%lf%lf",&v,&a);
	double vx=v*sin(a),vy=v*cos(a);
	double y0=vy*vy/20,x0=vx*vy/10;
	printf("%lf %lf",x0,y0);return 0;
}
