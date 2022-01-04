//p2013
#include <math.h>
#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
double pi=acos(-1);
struct lh{
	int x,y;
};
map<string,lh> coords;
lh coo;
double x,y,ang1,ang2,ang3;
int n;
string name,s2,s3;
int main(){
	cin>>n;
	while(n--){
		cin>>name>>x>>y;		
		coo.x=x;coo.y=y;
		coords[name]=coo;
	}
	cin>>ang1>>s2>>ang2>>s3>>ang3;
	double m1=tan((90-(ang1+ang2))*pi/180);
	double m2=tan((90-(ang1+ang3))*pi/180);
	if(m1==m2){
		cout<<"NO ANSWER";
		return 0;
	}
	double c1=m1*coords[s2].x-coords[s2].y;
	double c2=m2*coords[s3].x-coords[s3].y;
	double det=m2-m1;
	double x=(c2-c1)/det;
	double y=(m1*c2-m2*c1)/det;
	printf("%.2f %.2f",x,y);
	return 0;	
}
