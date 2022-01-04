//p1869
#include <cstdio>
int main(){
	int m;scanf("%d",&m);
	while(m--){
		int n,k;scanf("%d%d",&n,&k);
		bool f=0;
		while(n>0||k>0){
			if((n%2==0)&&(k%2==1)){f=1;break;}
			n/=2;k/=2;
		}
		if(f)printf("0\n");
		else printf("1\n");
	}
	return 0;
} 
