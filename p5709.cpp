//p5709
#include <cstdio>
#include <math.h>
int main(){
	int m,t,s;scanf("%d %d %d",&m,&t,&s);
	if(t==0)printf("%d",m);
	else{
		int g=ceil((double)s/t);
		m-g>0?printf("%d",m-g):printf("0");
	}
	return 0;
}
