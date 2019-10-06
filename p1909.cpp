#include <math.h>
#include <cstdio>
int main(){
	int n;
	int price=0;
	scanf("%d",&n);
	for(int i=0;i<3;i++){
		int a,b;
		scanf( "%d %d",&a,&b);
		double qty=(n*1.0)/a;
		if(i==0||ceil(qty)*b<price){
			price=ceil(qty)*b;
		}
	}
	printf("%d",price);
	return 0;
}
