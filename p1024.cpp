//p1024
#include <cstdio>
#include <math.h>
#include <algorithm>
double a,b,c,d,A,B,C,D,x[4];
int main(){
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	A=b*b-3*a*c;B=b*c-9*a*d;C=c*c-3*b*d;D=B*B-4*A*C;
	if(A==0&&B==0)x[1]=x[2]=x[3]=-b/(3*a);
	else if(D==0){
		double k=B/A;
		x[1]=-b/a+k;x[2]=x[3]=-k/2;
	}else if(D<0){
		double theta=acos((2*A*b-3*a*B)/(2*A*sqrt(A)))/3;
		x[1]=((-b-2*sqrt(A)*cos(theta)))/(3*a);
		x[2]=((-b+sqrt(A)*(cos(theta)+sqrt(3)*sin(theta))))/(3*a);
		x[3]=((-b+sqrt(A)*(cos(theta)-sqrt(3)*sin(theta))))/(3*a);
	}
	std::sort(x+1,x+4);
	printf("%.2lf %.2lf %.2lf",x[1],x[2],x[3]);
	return 0;
}
