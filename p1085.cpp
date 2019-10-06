#include <cstdio>
int main(){
	int date=0;
	int totaltime=0;
	for(int day=1;day<=7;day++){
		int a,b;
		int total;
		scanf("%d %d",&a,&b);
		total=a+b;
		if(total>8&&total>totaltime){
			totaltime=total;
			date=day;
		} 
	}
	printf("%d",date);
	return 0;
}
