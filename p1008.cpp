#include <cstdio>
int main(){
	int ns[9];
	for(int k=123;k<=329;k++){
		ns[0]=k/100;
		ns[1]=(k%100)/10;
		ns[2]=k%10;
		ns[3]=2*k/100;
		ns[4]=(2*k%100)/10;
		ns[5]=2*k%10;
		ns[6]=3*k/100;
		ns[7]=(3*k%100)/10;
		ns[8]=3*k%10;
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
				printf("%d",ns[x]);
				if((x+1)%3==0)printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
