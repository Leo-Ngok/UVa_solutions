//p5710
#include <cstdio>
int main(){
	int x;scanf("%d",&x);
	bool c1=(x%2==0)?1:0;
	bool c2=(x>4&&x<=12)?1:0;
	int a=(c1&&c2)?1:0;
	int b=(c1||c2)?1:0;
	int c=(c1^c2)?1:0;
	printf("%d %d %d %d",a,b,c,!b);return 0;
}
