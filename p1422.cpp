#include <cstdio>

int main(){
	int total;
	scanf("%d",&total);
	double cost=0;
	if(total>400){
		cost+=(total-400)*0.5663;
		total=400;
	}
	if(total>150){
		cost+=(total-150)*0.4663;
		total=150;
	}
	cost+=(total)*0.4463;
	printf("%.1f",cost);
	return 0;
}
