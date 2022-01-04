//p5735
#include <cstdio>
#include <math.h>
double dist(double x1,double y1,double x2,double y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(){
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double a=dist(x1,y1,x2,y2);
	double b=dist(x2,y2,x3,y3);
	double c=dist(x3,y3,x1,y1);
	printf("%.2f",a+b+c);return 0;
}
