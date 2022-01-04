#include <cstdio>
#include <math.h>
double a,b,c,d,l,r;
double f(double x){
    return c*x/a+(d/a-b*c/(a*a))*log(abs(a*x+b));
}
double f2(double x){
    return ((c*x*x)/(2*b)+(d*x)/b);
}
using namespace std;
int main(){
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&l,&r);
    if(abs(a) == 0)printf("%.6lf",f2(r)-f2(l));
    else printf("%.6lf",f(r)-f(l));
    return 0;
}
