//p5082
#include <cstdio>
int main(){
	int n;scanf("%d",&n);
	double s1=0,s2=0;int x,y;
	for(int k=0;k<n;k++){scanf("%d",&x);s1+=x;}
	for(int j=0;j<n;j++){scanf("%d",&y);s2+=y;}
	printf("%.6lf",(3*s1-2*s2)/(s1-s2));return 0;
}
