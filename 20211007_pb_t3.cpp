#include <cstdio>
#include <cmath>
double x,y,r;
const double pi=acos(-1);
int yr;
int main()
{
	scanf("%lf%lf",&x,&y);
	yr=(x*x+y*y)*pi/100;
	printf("%d",++yr);
	return 0;
}
