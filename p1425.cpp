#include <cstdio>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int mins=d-b;
	int hrs=c-a;
	if(mins<0){
		hrs--;
		mins+=60;
	}
	printf("%d %d",hrs,mins);
	return 0;
}
