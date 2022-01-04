//p1599
#include <cstdio>
#include <math.h>
struct vtx{int x,y;
};
double area(vtx v1,vtx v2,vtx v3){
	double s1=v1.x*v2.y-v1.y*v2.x;
	double s2=v2.x*v3.y-v2.y*v3.x;
	double s3=v3.x*v1.y-v3.y*v1.x;
	return abs(s1+s2+s3)/2.0;
}
bool onvtx(double a,double b,double c){
	if(a==0&&b==0&&c>0)return true;
	if(b==0&&c==0&&a>0)return true;
	if(c==0&&a==0&&b>0)return true;
	return false;
}
int main(){
	char c1,c2,c3,c4;vtx v1,v2,v3,v4;
	scanf("%c%d%c%d%c%c",&c1,&v1.x,&c2,&v1.y,&c3,&c4);
	scanf("%c%d%c%d%c%c",&c1,&v2.x,&c2,&v2.y,&c3,&c4);
	scanf("%c%d%c%d%c%c",&c1,&v3.x,&c2,&v3.y,&c3,&c4);
	scanf("%c%d%c%d%c%c",&c1,&v4.x,&c2,&v4.y,&c3,&c4);
	double s=area(v1,v2,v3);
	double s1=area(v1,v2,v4);
	double s2=area(v3,v2,v4);
	double s3=area(v1,v3,v4);
	if(s1>0&&s2>0&&s3>0){
		if(s==s1+s2+s3)printf("1");
		else printf("2");
	}else if(onvtx(s1,s2,s3))printf("4");
	else printf("3");
	return 0;
}
