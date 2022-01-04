//p5743
#include <cstdio>
#include <math.h>
int n;
int main(){
	scanf("%d",&n);
	int tot=1+3*(pow(2,n-1)-1);
	printf("%d",tot);
	return 0;
}
