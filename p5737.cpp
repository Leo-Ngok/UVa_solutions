//p5737
#include <cstdio>
int a,b;
int main(){
	scanf("%d%d",&a,&b);	
	if(a%4)a+=(4-a%4);
	b-=b%4;
	int y1=a,y2=b;
	int s1=(b-a)/4+1;
	if(a%100)a+=(100-a%100);
	b-=b%100;
	int s2=(b-a)/100+1;
	if(a%400)a+=(400-a%400);
	b-=b%400;
	int s3=(b-a)/400+1;
	int total=s1-s2+s3;
	printf("%d\n",total);
	for(int k=y1;k<=y2;k+=4){
		if(k%100!=0||k%400==0)printf("%d ",k);
	}
	return 0;
}
