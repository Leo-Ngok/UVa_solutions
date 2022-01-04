#include <cstdio>
int main(void){
	int n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		int m;
		scanf("%d",&m);
		int max=0;
		for(int g=1;g<=m;g++){
			int p;
			scanf("%d",&p);
			if(p>max)max=p;
		}
		printf("Case %d: %d\n",k,max);
	}
	return 0;
} 
