//p5715
#include <cstdio>
int swap(int &a, int &b){
	int t=a;a=b;b=t;
}
int main(){
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	if(a>b)swap(a,b);
	printf("%d %d %d",a,b,c);return 0;
}
