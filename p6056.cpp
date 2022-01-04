#include <cstdio>
#include <math.h>
int  s,I,r,n;
double b,g;
int minn(int x,int y){
	return x<y?x:y;
}
int main(){
	scanf("%d%d%d%lf%lf",&s,&I,&n,&b,&g);
	while(n--){
		int Ii=ceil(I*g),Si=ceil(s*I*b);
		r+=Ii;
		if(Si>=s)I+=s-Ii,s=0;
		else I+=Si-Ii;s-=Si;
	}
	printf("%d %d %d",s,I,r);
	return 0;
} 
