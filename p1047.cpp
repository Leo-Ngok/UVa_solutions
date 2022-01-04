#include <cstdio>
#include <math.h>
int main(){
	int ns[9];
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int f=987*a/c;
	bool hasnum=false;
	for(int k=123;k<=f;k++){
		if(k%a!=0)continue;
		ns[0]=k/100;
		ns[1]=(k%100)/10;
		ns[2]=k%10;
		ns[3]=b*k/(a*100);
		ns[4]=(b*k/a%100)/10;
		ns[5]=b*k/a%10;
		ns[6]=c*k/a/100;
		ns[7]=(c*k/a%100)/10;
		ns[8]=c*k/a%10;
		bool dup=0;
		for(int g=0;g<9;g++){
			if(ns[g]==0){
				dup=1;
				break;
			}
			for(int d=g+1;d<9;d++){
				if(ns[g]==ns[d]){
					dup=1;
					break;
				}				
			}
		}
		if(!dup){
			for(int x=0;x<9;x++){
				hasnum=true;
				printf("%d",ns[x]);
				if((x+1)%3==0)printf(" ");
			}
			printf("\n");
		}
	}
	if(!hasnum)printf("No!!!");
	return 0;
}
