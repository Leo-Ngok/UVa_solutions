//p2026
#include <cstdio>
#include <math.h>
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
void swap(int &a,int &b){
	int t=a;a=b;b=t; 
} 
int main(){
	int x1,y1,x2,y2;scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(x1>x2){swap(x1,x2);swap(y1,y2);}
	int m2=y2-y1,m1=x2-x1,m3=x2*y1-x1*y2,m4=m1;
	int g=abs(gcd(m1,m2));
	m4/=g;m2/=g;
	printf("y=");
	if(m4==m2)printf("");
	else if(m4+m2==0)printf("-");	
	else if(m4==1)printf("%d",m2);
	else printf("%d/%d*",m2,m4);
	printf("x");
	int q=abs(gcd(m1,m3));
	m1/=q;m3/=q;
	if(m3>0)printf("+");
	if(m3!=0){
		if(m1==1)printf("%d",m3);
		else printf("%d/%d",m3,m1);
	}
	return 0;
}
