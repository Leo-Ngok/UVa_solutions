//p1181
#include <cstdio>
int main(){
	int n,m;scanf("%d%d",&n,&m);
	int s=0;
	int seg=1;
	for(int k=0;k<n;k++){
		int g;scanf("%d",&g);
		if(g+s<=m)s+=g;
		else {seg++;s=g;}
	}
	printf("%d",seg);
}
