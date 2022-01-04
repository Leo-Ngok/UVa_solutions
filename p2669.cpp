//p2669
#include <cstdio>
int main(){
	int n,s=0,g=1,r=0;scanf("%d",&n);
	for(int k=1;k<=n;k++){
		if(r==g){g++;r=0;}
		s+=g;r++;
	}
	printf("%d",s);return 0;
}
