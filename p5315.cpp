//p5315
#include <cstdio>
int main(){
	int n,L,G,W,H;
	scanf("%d %d %d",&n,&L,&G);
	for(int j=0;j<n;j++){
		scanf("%d %d",&W,&H);
		while(W>G||H>G) {W/=2;H/=2;}
		if(W<L||H<L)printf("Too Young\n");
		else if(W!=H)printf("Too Simple\n");
		else printf("Sometimes Naive\n");	
	}
	return 0;	
}
