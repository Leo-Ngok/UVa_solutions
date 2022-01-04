//p1355
#include <cstdio>
#include <math.h>
#include <iostream>
using namespace std;
struct vtx{int x,y;
	bool operator ==(const vtx &v)const{
		return (x==v.x&&y==v.y);
	} 
};
int area(vtx v1,vtx v2,vtx v3){
	int s1=v1.x*v2.y-v1.y*v2.x;
	int s2=v2.x*v3.y-v2.y*v3.x;
	int s3=v3.x*v1.y-v3.y*v1.x;
	return abs(s1+s2+s3);
}
bool onvtx(int a,int b,int c){
	if(a==0&&b==0&&c>0)return true;
	if(b==0&&c==0&&a>0)return true;
	if(c==0&&a==0&&b>0)return true;
	return false;
}
int main(){
	char c;vtx v1,v2,v3,v4;
	cin>>c>>v1.x>>c>>v1.y>>c;
	cin>>c>>v2.x>>c>>v2.y>>c;
	cin>>c>>v3.x>>c>>v3.y>>c;
	cin>>c>>v4.x>>c>>v4.y>>c;
	int s=area(v1,v2,v3);
	int s1=area(v1,v2,v4);
	int s2=area(v3,v2,v4);
	int s3=area(v1,v3,v4);
	if(v1==v4||v2==v4||v3==v4)cout<<4;
	else if(s1+s2+s3>s)cout<<2;
	else if(s1==0||s2==0||s3==0)cout<<3;
	else cout<<1;
	
	return 0;
}
