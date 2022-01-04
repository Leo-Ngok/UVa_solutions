//p5711
#include <cstdio>
int main(){
	int y;scanf("%d",&y);
	int l=0;
	if(y%400==0||(y%4==0&&y%100!=0))l=1;
	printf("%d",l);return 0;
}
