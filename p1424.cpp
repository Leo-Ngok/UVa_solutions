#include <cstdio>
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int weeks=x/7;
	int remainder=x%7;
	int workingdays=5*weeks;
	workingdays+=remainder;
	for(int i=0;i<remainder;i++){
		if((n+i)==6) workingdays--;
		if((n+i)==7) workingdays--;
	}
	printf("%d",workingdays*250);
	return 0;
}
