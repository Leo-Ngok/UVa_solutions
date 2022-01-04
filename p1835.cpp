//p1835
#include <cstdio>
#include <cstring>
#include <math.h>
bool primity[100000010];
int plist[40000010]={0};
int main(){
	int L,R;scanf("%d %d",&L,&R);	
	std::memset(primity,1,sizeof(primity));
	primity[0]=primity[1]=0;
	int pos=0;
	for(int k=2;k<=R;k++){
		if(primity[k])plist[++pos]=k;
		for(int j=1;j<=pos&&k*plist[j]<=R;j++){
			primity[k*plist[j]]=0;
			if(k%plist[j]==0)break;
		}
	}
	int cnt=0;
	for(int k=1;;k++){
		if(plist[k]<L)continue;
		if(plist[k]>R)break;
		cnt++;
	}
	printf("%d",cnt);
}
