//p5718
#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int x;
	int min=1000;
	for(int k=0;k<n;k++){
		scanf("%d",&x);
		if(x<min)min=x;
	}
	printf("%d",min);
	return 0;
}
