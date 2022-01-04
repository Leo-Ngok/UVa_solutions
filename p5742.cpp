//p5742
#include <cstdio>
int main(){
	int n,a,b,c;scanf("%d",&n);
	for(int k=0;k<n;k++){
		scanf("%d%d%d",&a,&b,&c);
		double mark=b*0.7+c*0.3;
		if((b+c>140)&&mark>=80)printf("Excellent\n");
		else printf("Not excellent\n");
	}
	return 0;
} 
