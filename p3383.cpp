//p3383
#include <cstdio>
#include <cstring>
#include <math.h>
bool primity[100000010];
int plist[40000010]={0};
int main(){
	int n,q;scanf("%d %d",&n,&q);	
	std::memset(primity,1,sizeof(primity));
	primity[0]=primity[1]=0;
	int pos=0;
	for(int k=2;k<=n;k++){
		if(primity[k])plist[++pos]=k;
		for(int j=1;j<=pos&&k*plist[j]<=n;j++){
			primity[k*plist[j]]=0;
			if(k%plist[j]==0)break;
		}
	}
	while(q--){
		int i;scanf("%d",&i);
		printf("%d\n",plist[i]);
	}
}
