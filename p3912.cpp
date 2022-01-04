//p3912
#include <cstdio>
#include <cstring>
#include <math.h>
bool primity[100000010];
int plist[40000010]={0};
int main(){
	int n;scanf("%d",&n);	
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
	int q=1;
	while(1){
		if(plist[q]!=0)q++;
		else {
			printf("%d",q-1);
			return 0;
		}
	}
}
