//p5717
#include <cstdio>
void swap(int &a,int &b){
	int t=a;a=b;b=t;
}
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	if(a>b)swap(a,b);
	if(a+b<=c){
		printf("Not triangle");return 0;
	}	
	double x=(a*a+b*b-c*c);
	if(x>0)printf("Acute triangle\n");
	else if(x==0)printf("Right triangle\n");
	else printf("Obtuse triangle\n");
	if(a==b||b==c||c==a)printf("Isosceles triangle\n");
	if(a==b&&b==c)printf("Equilateral triangle\n");
	return 0;
}
