//p1258
#include <cstdio>
int vm,vc,s;
int main(){
	scanf("%d%d%d",&s,&vm,&vc);
	double t0=(double)s*(vc+vm)/(vc*vc+3*vc*vm);
	double t1=(double)(vc-vm)*t0/(vc+vm);
	printf("%lf",2*t0+t1);
	return 0;
}
