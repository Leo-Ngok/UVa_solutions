//p5724
#include <cstdio>
int main(){
	int n;
	int min=1000,max=0;
	int x;
	scanf("%d",&n);
	for(int k=0;k<n;k++){
		scanf("%d",&x);
		if(x<min)min=x;
		if(x>max)max=x;
	}
	printf("%d",max-min);
}
