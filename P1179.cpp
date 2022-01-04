//p1179
#include <cstdio>
int main(){
	int L,R;
	int c=0;
	scanf("%d %d",&L,&R);
	for(int k=L;k<=R;k++){
		int j=k;
		while(j>0){
			if(j%10==2)c++;
			j/=10;
		}
	}
	printf("%d",c);
	return 0;
}
